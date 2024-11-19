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
