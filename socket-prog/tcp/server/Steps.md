#### Headers needed
```
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
```

#### Step-1: Create an empty socket

```
int ssd;	
ssd = socket(AF_INET, SOCK_STREAM, 0);
if(ssd<0) {
	perror("socket");
	exit(1);
}
```

#### Step-2 : Bind to certain IP Address & fixed Port number

```
uint16_t sport = 1500;
struct sockaddr_in  saddr;

//bzero(&saddr, sizeof(addr));
saddr.sin_family = AF_INET;
saddr.sin_port = htons(sport);
//saddr.sin_addr = inet_addr("127.0.0.1");
saddr.sin_addr.s_addr = INADDR_ANY;
bzero(&saddr.sin_zero, sizeof(saddr.sin_zero));

ret=bind(ssd, (struct sockaddr*) &saddr,sizeof(struct sockaddr_in));
if(ret<0) {
	perror("bind");
	exit(2);
}
```
#### Step-3 :  Put socket in listencing mode
```
int backlog=3;
ret = listen(ssd,backlog);
if(ret<0) {
    perror("listen");
}
```

#### Step-4 : Accept client connection
```
int csd;
struct sockaddr_in caddr;
socklen_t len=0;
csd = accept(ssd,  (struct sockaddr*)&caddr, &len); //block for client conn
if(csd<0) {
   perror("accept");
}
printf("Got a client request from %s : %d\n", inet_ntoa(addr.sin_addr),ntohs(caddr.sin_port));
````
#### Step-5 : Talk to client
```
char rx_buf[100];
int nbytes, rx_len, tx_len, max_len=100;
rx_len = recv(csd, rx_buf, max_len, 0); 
if(rx_len < 0)
{
   perror("recv");
}
tx_len = send(csd, rx_buf, rx_len,0);
if(tx_len < 0)
{
   perror("send");
}
```

#### Step-6 : Close the sockets
```
close(csd);
close(ssd);
```
