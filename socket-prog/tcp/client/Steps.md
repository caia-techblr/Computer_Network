#### Step-1: Create an empty socket

```
int csd;	
csd = socket(AF_INET, SOCK_STREAM, 0);
if(ssd<0) {
	perror("socket");
	exit(1);
}
```
#### Step-2 : Bind to Dyanmic IP Address & Dynamic Port number (free/ephmeral)

```
struct sockaddr_in  caddr;

//bzero(&saddr, sizeof(addr));
caddr.sin_family = AF_INET;
caddr.sin_port = htons(0);
//caddr.sin_addr = inet_addr("0.0.0.0");
bzero(&saddr.sin_zero, sizeof(caddr.sin_zero));

ret=bind(csd, (struct sockaddr*) &caddr,sizeof(struct sockaddr_in));
if(ret<0) {
	perror("bind");
	exit(2);
}
```

#### Step-3 : Connect to server

```
uint16_t server_port = 1800;
char *server_ip = "127.0.0.1";

struct sockaddr_in  serv_addr;
serv_addr.sin_family = AF_INET;
serv_addr.sin_port = htons(server_port);
bzero(&saddr.sin_zero, sizeof(serv_addr.sin_zero));

ret = connect(csd, &serv_addr, sizeof(serv_addr));
if(ret<0)
{
   perror("connect");
   exit(3);
}
```
#### Step-4 : Talk to server
```
char tx_buf[100],rx_buf[100];
int tx_len, rx_len, max_len=100;
tx_len = sen(csd, tx_buf, strlen(tx_buf), 0); 
if(tx_len < 0)
{
   perror("send");
}
rx_len = recv(csd, rx_buf, max_len,0);
if(rx_len < 0)
{
   perror("recv");
}
printf("Server replied : %s\n", rx_buf);
```
#### Step-5 : Close the socket
```
close(csd);
```
