//heade files
int main(int argc, char* argv[]) {
  int csd = socket(AF_INET, SOCK_STREAM, 0);
  if(csd<0) perror("socket");

  struct sockaddr_in caddr;
  caddr.sin_family = AF_INET;
  caddr.sin_port = htons(0);		//choose any free port, dynamic port
  caddr.sin_addr.s_addr = INADDR_ANY;
  //bzero

  ret = bind(csd, (struct sockaddr*)&caddr, sizeof(struct sockaddr_in));
  if(ret<0) {
	perror("bind");
  }

  struct sockaddr_in saddr;
  saddr.sin_family = AF_INET;
  saddr.sin_port = htons(servPort);
  saddr.sin_addr.s_addr = inet_addr(servAddress);;
  //bzero
  ret = connect(csd, (struct sockaddr*)&saddr, sizeof(struct sockaddr_in));
  if(ret < 0) {
   perror("connect");
  }

  //do read, write ops using csd ....APIs - send, recv

  close(csd);
  return 0;
}

