import socket

UDP_IP = "127.0.0.1"
UDP_PORT = 5050
MESSAGE = b"Hello, World!"
MAX_SIZE = 1024

print("UDP target IP: %s" % UDP_IP)
print("UDP target port: %s" % UDP_PORT)
print("message: %s" % MESSAGE)

sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) # UDP
sock.sendto(MESSAGE, (UDP_IP, UDP_PORT))
data, addr = sock.recvfrom(MAX_SIZE)
print("server says: {1}", data)

