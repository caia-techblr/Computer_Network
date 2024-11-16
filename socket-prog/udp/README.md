# UDP Socket Programming

### Socket API
* socket
* bind
* sendto
* recvfrom

### Examples

#### C Examples
* [UDP Receiver](udp-receiver.c)
* [UDP Sender](udp-sender.c)

#### Python Examples
* [UDP Receiver](udp-rcvr.py)
* [UDP Sender](udp-sender.py)

### Activity-1
* Run UDP Receiver on port no : 1800
* Receiver will echo back message transmitted by sender
* Connect using telnet client / nc tool
* Send a simple message from client and receive back
* Analyze UDP tarffic using Wireshark tool

### Activity-2
* Write UPD sender code to test above receiver

### Activity-3
* Implement timeofday service where server return current time on client request

### Additional Examples
* UDP receiver which will return attributes of requested file (using lstat API)
