import socket
import errno
import select

PORT = 23
IP_ADDRESS = "192.168.4.1"
CAMERA_PORT = 9060
CAMERA_IP_ADDRESS = "192.168.0.1"

sock = None

def connectSock():
    global sock
    sockID = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sockID.setblocking(0)  # Set socket to non-blocking

    addr = (IP_ADDRESS, PORT)
    try:
        sockID.connect(addr)
    except socket.error as e:
        print(e)
        if e.errno == errno.EINPROGRESS:
            pass
        else:
            print("Cannot connect to Pluto, please try again")
            exit(0)
    # Use select to wait for the connection to be established
    while True:
        try:
            _, ready, _ = select.select([], [sockID], [], 7)
            # print(ready, sockID)
            if ready:
                sockID.setblocking(1)  # Set socket back to blocking
                sock = sockID
                print("Pluto Connected")
                return True
            else:
                print("Cannot connect to Pluto, please try again7")
                exit(0)
        except select.error as e:
            if e.args[0] == errno.EINTR:
                continue
            else:
                print("Cannot connect to Pluto, please try again4")
                exit(0)

def writeSock(data):
    global sock
    try:
        data = bytes(data)
        # print(data)
        bytes_sent = sock.send(data)
        socketSyncLock = 1
        return bytes_sent
    except socket.error as e:
        print("Error while writing to socket:", e)
        return -1

def readSock(count):
    try:
        data = sock.recv(count)
        if data:
            val = data[0]
            return val
        else:
            return 0  # Connection closed
    except socket.error as e:
        print("Error while reading from socket:", e)
        return -1
    