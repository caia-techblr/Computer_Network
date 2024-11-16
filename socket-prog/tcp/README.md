# TCP Socket Programming

### Socket API
* socket
* bind
* listen
* accept
* connect
* send
* recv

### Examples

#### C Examples
* [TCP Server](server/tcp-server.c)
* [TCP Client](client/tcp-client.py)
* [Select Demo](select/select-demo.c)
#### Python Examples
* [Simple TCP Server](server/tcp-server.py)
* [TCP Server using with block](server/tcp-server-with.py)
* [TCP Server as class](server/tcp-server-classhyuj.py)
* [TCP Client](client/tcp-client.py)
* [Select Demo](select/select-demo.py)

### Activity-1
* Run TCP Server on port no : 1800
* Server will echo back message sent by client
* Connect using telnet client / nc tool
* Send a simple message from client and receive back
* Analyze TCP tarffic using Wireshark tool

### Activity-2
* Connect to above server using TCP Client code

### Activity-3
* Modify TCP Server to receive multiple messages and echo back
* Stop the communication on receiving a msg "Bye"

### Activity-4
* Modify TCP Server code to handle multiple clients using Threads
* Rewrite above code usign select API.

### Activity-5
* Design TCP Server and Client to exchange messages asynchronously
* Sender thread in client/receiver will read from STDIN and send to other peer
* Receiver thread in client/receiver will print transmitted message from other peer
* Client/Server will stop tranmitting and close connection if user input is "stop"
* Other peer will close the connecion on receiving message like "quit"

### Additional Example
* File Transfer using TCP Client & Server
* Remote command execution
* Resolving IP Address using name service
