import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from custom_msgs.srv import PlutoPilot
from custom_msgs.msg import PlutoMsg
from custom_msgs.msg import PlutoMsgAP
from plutodrone.Communication import *
from plutodrone.Protocol import Protocol
from plutodrone.Common import *
import threading
import time

NONE_COMMAND = 0 
TAKE_OFF = 1 
LAND = 2 

TRIM_MAX = 1000
TRIM_MIN = -1000

MSP_FC_VERSION = 3
MSP_RAW_IMU = 102
MSP_RC = 105
MSP_ATTITUDE = 108
MSP_ALTITUDE = 109
MSP_ANALOG = 110
MSP_SET_RAW_RC = 200
MSP_ACC_CALIBRATION = 205
MSP_MAG_CALIBRATION = 206
MSP_SET_MOTOR = 214
MSP_SET_ACC_TRIM = 239
MSP_ACC_TRIM = 240
MSP_EEPROM_WRITE = 250
MSP_SET_POS = 216
MSP_SET_COMMAND = 217

class PlutoNode(Node):

    def __init__(self):
        super().__init__('pluto_node')

        self.is_socket_created = False
        self.is_auto_pilot_on = False
        self.command_type = NONE_COMMAND
        self.command_type_ap = NONE_COMMAND
        self.userRC = [1500, 1500, 1500, 1500, 1000, 1000, 1000, 1000]
        self.userRCAP = [1500, 1500, 1500, 1500]
        self.droneRC = [1500, 1500, 1500, 1500, 1000, 1000, 1000, 1000]

        # Initialize Protocol
        self.pro = Protocol()

        # Create ROS 2 service client
        self.service_client = self.create_client(PlutoPilot, 'pluto_service')
        # while not self.service_client.wait_for_service(timeout_sec=1.0):
        #     self.get_logger().info('Service not available, waiting...')

        # Subscribe to topics
        self.sub = self.create_subscription(PlutoMsg, '/drone_command', self.read_drone_command, 10)
        self.sub_auto_pilot = self.create_subscription(PlutoMsgAP, '/drone_ap_command', self.read_drone_ap_command, 10)

        self.lock_user_rc = threading.Lock()
        self.lock_command_type = threading.Lock()
        self.lock_command_type_ap = threading.Lock()

        self.threads = []

    def read_drone_command(self, msg):
        with self.lock_user_rc:
            self.userRC[0] = msg.rc_roll
            self.userRC[1] = msg.rc_pitch
            self.userRC[2] = msg.rc_throttle
            self.userRC[3] = msg.rc_yaw
            self.userRC[4] = msg.rc_aux1
            self.userRC[5] = msg.rc_aux2
            self.userRC[6] = msg.rc_aux3
            self.userRC[7] = msg.rc_aux4

            if self.command_type == NONE_COMMAND:
                with self.lock_command_type:
                    self.command_type = msg.command_type

            with self.lock_command_type_ap:
                if msg.trim_roll != 0 or msg.trim_pitch != 0:
                    self.trim_roll += msg.trim_roll
                    self.trim_pitch += msg.trim_pitch

                    if self.trim_roll > TRIM_MAX:
                        self.trim_roll = TRIM_MAX
                    elif self.trim_roll < TRIM_MIN:
                        self.trim_roll = TRIM_MIN

                    if self.trim_pitch > TRIM_MAX:
                        self.trim_pitch = TRIM_MAX
                    elif self.trim_pitch < TRIM_MIN:
                        self.trim_pitch = TRIM_MIN

                    self.pro.sendRequestMSP_SET_ACC_TRIM(self.trim_roll, self.trim_pitch)
                    self.pro.sendRequestMSP_EEPROM_WRITE()

    def read_drone_ap_command(self, msg):
        self.get_logger().info('Received Drone AP Command')
        self.get_logger().info('Yaw: %d' % msg.rc_yaw)

        with self.lock_user_rc:
            self.userRCAP[0] = msg.rc_roll
            self.userRCAP[1] = msg.rc_pitch
            self.userRCAP[2] = msg.rc_throttle
            self.userRCAP[3] = msg.rc_yaw

            with self.lock_command_type_ap:
                if self.command_type_ap == NONE_COMMAND:
                    self.command_type_ap = msg.command_type

    def create_socket(self):
        is_socket_created = connectSock()
        self.is_socket_created = is_socket_created

        if is_socket_created:
            self.threads.append(self.create_thread(self.write_function, 2))
            self.threads.append(self.create_thread(self.read_function, 3))
            self.threads.append(self.create_thread(self.service_function, 4))

    def write_function(self, thread_arg):
        requests = [MSP_RC, MSP_ATTITUDE, MSP_RAW_IMU, MSP_ALTITUDE, MSP_ANALOG]
        self.pro.sendRequestMSP_ACC_TRIM()
        
        while True:
            with self.lock_user_rc:
                self.droneRC[:] = self.userRC  # Copy the userRC values

            if self.is_auto_pilot_on and self.droneRC[7] == 1500:
                with self.lock_user_rc:
                    self.droneRC[0] += self.userRCAP[0] - 1500
                    self.droneRC[1] += self.userRCAP[1] - 1500
                    self.droneRC[2] += self.userRCAP[2] - 1500
                    self.droneRC[3] += self.userRCAP[3] - 1500
            
            self.pro.sendRequestMSP_SET_RAW_RC(self.droneRC)
            self.pro.sendRequestMSP_GET_DEBUG(requests)
            
            with self.lock_command_type:
                if self.command_type != NONE_COMMAND:
                    self.pro.sendRequestMSP_SET_COMMAND(self.command_type)
                    self.command_type = NONE_COMMAND
                elif self.command_type_ap != NONE_COMMAND and self.is_auto_pilot_on and self.droneRC[7] == 1500:
                    with self.lock_command_type_ap:
                        self.pro.sendRequestMSP_SET_COMMAND(self.command_type_ap)
                        self.command_type_ap = NONE_COMMAND
            
            time.sleep(0.022)  # Sleep for 22 milliseconds

    def read_function(self, thread_arg):
        while True:
          readFrame()

    def service_function(self, thread_arg):
        while True:
            roll, pitch, yaw, battery, rssi, acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z, mag_x, mag_y, mag_z, alt, rc_aux1, rc_aux2, rc_aux3, rc_aux4, rc_throttle, rc_pitch, rc_yaw, rc_roll = self.pro.returnData()
            request = PlutoPilot.Request()
            with self.lock_command_type:
                request.acc_x = float(acc_x)
                request.acc_y = float(acc_y)
                request.acc_z = float(acc_z)
                request.gyro_x = float(gyro_x)
                request.gyro_y = float(gyro_y)
                request.gyro_z = float(gyro_z)
                request.mag_x = float(mag_x)
                request.mag_y = float(mag_y)
                request.mag_z = float(mag_z)
                request.roll = int(roll)
                request.pitch = int(pitch)
                request.yaw = int(yaw)
                request.alt = float(alt)
                request.battery = float(battery)
                request.rssi = int(rssi)

            # Use a non-blocking call to avoid blocking the executor
            future = self.service_client.call_async(request)

            # Sleep for a short time to yield control to other threads
            time.sleep(0.01)

            # Check if the future is completed
            if future.done():
                if future.result() is not None:
                    # print(future.result())
                    pass
                    # self.get_logger().info('Service response: %s' % future.result().response_field)
                else:
                    self.get_logger().error('Service call failed')

    def create_thread(self, function, thread_id):
        thread = threading.Thread(target=function, args=(thread_id,))
        thread.start()
        return thread

def main(args=None):
    rclpy.init(args=args)
    node = PlutoNode()
    node.create_socket()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
