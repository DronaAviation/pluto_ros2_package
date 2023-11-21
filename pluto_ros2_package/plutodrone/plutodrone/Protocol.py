from plutodrone.Common import * 

MSP_FC_VERSION=3
MSP_RAW_IMU=102
MSP_RC = 105
MSP_ATTITUDE=108
MSP_ALTITUDE=109
MSP_ANALOG=110
MSP_SET_RAW_RC=200
MSP_ACC_CALIBRATION=205
MSP_MAG_CALIBRATION=206
MSP_SET_MOTOR=214
MSP_SET_ACC_TRIM=239
MSP_ACC_TRIM=240
MSP_EEPROM_WRITE = 250
MSP_SET_POS= 216
MSP_SET_COMMAND = 217

IDLE = 0
HEADER_START = 1
HEADER_M = 2
HEADER_ARROW = 3
HEADER_SIZE = 4
HEADER_CMD = 5
HEADER_ERR = 6

MSP_HEADER="$M<"

alt = 0.0
roll = 0
pitch = 0
yaw = 0
battery = 0.0
rssi = 0
acc_x = 0.0
acc_y = 0.0
acc_z = 0.0
gyro_x = 0.0
gyro_y = 0.0
gyro_z = 0.0
mag_x = 0.0
mag_y = 0.0
mag_z = 0.0

FC_versionMajor = 0
FC_versionMinor = 0
FC_versionPatchLevel = 0

trim_roll = 0
trim_pitch = 0

rc_throttle = 1500
rc_roll = 1500
rc_pitch = 1500
rc_yaw = 1500
rc_aux1 = 1500
rc_aux2 = 1500
rc_aux3 = 1500
rc_aux4 = 1500

class Protocol():
    inputBuffer = bytearray(1024) # used to store data from packets
    bufferIndex = 0

    def read8(self):
        val = self.inputBuffer[self.bufferIndex] & 0xFF
        self.bufferIndex += 1
        return val

    def read16(self):
        val1 = self.inputBuffer[self.bufferIndex] & 0xFF
        self.bufferIndex += 1
        val2 = (self.inputBuffer[self.bufferIndex] << 8)
        self.bufferIndex += 1
        return val1 + val2

    def read32(self):
        val1 = self.inputBuffer[self.bufferIndex] & 0xFF
        self.bufferIndex += 1
        val2 = (self.inputBuffer[self.bufferIndex] & 0xFF) << 8
        self.bufferIndex += 1
        val3 = (self.inputBuffer[self.bufferIndex] & 0xFF) << 16
        self.bufferIndex += 1
        val4 = (self.inputBuffer[self.bufferIndex] & 0xFF) << 24
        self.bufferIndex += 1
        return val1 + val2 + val3 + val4

    def evaluateCommand(self, command):
        global roll, pitch, yaw, battery, rssi, acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z, mag_x, mag_y, mag_z, alt, rc_aux1, rc_aux2, rc_aux3, rc_aux4, rc_throttle, rc_pitch, rc_yaw, rc_roll
        global FC_versionMajor, FC_versionMinor, FC_versionPatchLevel, trim_roll, trim_pitch
    
        if command == MSP_FC_VERSION:
            FC_versionMajor = self.read8()
            FC_versionMinor = self.read8()
            FC_versionPatchLevel = self.read8()

        elif command == MSP_RAW_IMU:
            acc_x = self.read16()
            acc_y = self.read16()
            acc_z = self.read16()

            gyro_x = self.read16() / 8
            gyro_y = self.read16() / 8
            gyro_z = self.read16() / 8

            mag_x = self.read16() / 3
            mag_y = self.read16() / 3
            mag_z = self.read16() / 3

        elif command == MSP_ATTITUDE:
            roll = self.read16() / 10
            pitch = self.read16() / 10
            yaw = self.read16()

        elif command == MSP_ALTITUDE:
            alt = (self.read32() / 10) - 0
            
        elif command == MSP_ANALOG:
            battery = self.read8() / 10.0
            rssi = self.read16()

        elif command == MSP_ACC_TRIM:
            trim_pitch = self.read16()
            trim_roll = self.read16()

        elif command == MSP_RC:
            rc_roll = self.read16()
            rc_pitch = self.read16()
            rc_yaw = self.read16()
            rc_throttle = self.read16()
            rc_aux1 = self.read16()
            rc_aux2 = self.read16()
            rc_aux3 = self.read16()
            rc_aux4 = self.read16()

        else:
            # Handle other cases here if needed
            pass

        
    def returnData(self):
        global roll, pitch, yaw, battery, rssi, acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z, mag_x, mag_y, mag_z, alt, rc_aux1, rc_aux2, rc_aux3, rc_aux4, rc_throttle, rc_pitch, rc_yaw, rc_roll
        global FC_versionMajor, FC_versionMinor, FC_versionPatchLevel, trim_roll, trim_pitch
        return roll, pitch, yaw, battery, rssi, acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z, mag_x, mag_y, mag_z, alt, rc_aux1, rc_aux2, rc_aux3, rc_aux4, rc_throttle, rc_pitch, rc_yaw, rc_roll
  
    def sendRequestMSP(self, data):
        writeSock(data)

    # def sendMulRequestMSP(self, data, i):
    #     com.writeMulSock(data, i)

    def createPacketMSP(self, msp, payload):
        bf = [ord(char) & 0xFF for char in MSP_HEADER]
        checksum = 0
        pl_size = len(payload) & 0xFF
        bf.append(pl_size)
        checksum ^= pl_size

        bf.append(msp & 0xFF)
        checksum ^= msp & 0xFF

        if payload:
            for k in payload:
                bf.append(k & 0xFF)
                checksum ^= k & 0xFF

        bf.append(checksum & 0xFF)
        return bf

    def sendRequestMSP_SET_RAW_RC(self, channels):
        rc_signals = [0] * 16
        index = 0
        for i in range(8):
            rc_signals[index] = channels[i] & 0xFF
            rc_signals[index + 1] = (channels[i] >> 8) & 0xFF
            index += 2
        self.sendRequestMSP(self.createPacketMSP(MSP_SET_RAW_RC, rc_signals))

    def sendMulRequestMSP_SET_RAW_RC(self, channels):
        rc_signals = [0] * 16
        index = 0
        droneNumber = channels[8]
        for i in range(8):
            rc_signals[index] = channels[i] & 0xFF
            rc_signals[index + 1] = (channels[i] >> 8) & 0xFF
            index += 2
        self.sendMulRequestMSP(self.createPacketMSP(MSP_SET_RAW_RC, rc_signals), droneNumber)

    def sendRequestMSP_SET_POS(self, posArray):
        posData = [0] * 8
        index = 0
        for i in range(4):
            posData[index] = posArray[i] & 0xFF
            posData[index + 1] = (posArray[i] >> 8) & 0xFF
            index += 2
        self.sendRequestMSP(self.createPacketMSP(MSP_SET_POS, posData))

    def sendRequestMSP_SET_COMMAND(self, commandType):
        # print(commandType)
        payload = [commandType & 0xFF]
        self.sendRequestMSP(self.createPacketMSP(MSP_SET_COMMAND, payload))

    def sendRequestMSP_GET_DEBUG(self, requests):
        for req in requests:
            self.sendRequestMSP(self.createPacketMSP(req, []))

    def sendMulRequestMSP_GET_DEBUG(self, requests, index):
        for req in requests:
            self.sendMulRequestMSP(self.createPacketMSP(req, []), index)

    def sendRequestMSP_SET_ACC_TRIM(self, trim_roll, trim_pitch):
        payload = [
            trim_pitch & 0xFF,
            (trim_pitch >> 8) & 0xFF,
            trim_roll & 0xFF,
            (trim_roll >> 8) & 0xFF
        ]
        self.sendRequestMSP(self.createPacketMSP(MSP_SET_ACC_TRIM, payload))

    def sendRequestMSP_ACC_TRIM(self):
        self.sendRequestMSP(self.createPacketMSP(MSP_ACC_TRIM, []))

    def sendRequestMSP_EEPROM_WRITE(self):
        self.sendRequestMSP(self.createPacketMSP(MSP_EEPROM_WRITE, []))