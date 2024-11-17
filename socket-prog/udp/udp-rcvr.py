"""
UDP Receiver
"""
import socket

SERVER_IP = "127.0.0.1"
SERVER_PORT = 5050
MESSAGE = b"Hello, World!"
MAX_SIZE = 1024

sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) 
sock.bind((SERVER_IP, SERVER_PORT))
#sock.sendto(MESSAGE, (UDP_IP, UDP_PORT))
data, addr = sock.recvfrom(MAX_SIZE)
print("client says: {1}", data)
sock.sendto(data, addr)
