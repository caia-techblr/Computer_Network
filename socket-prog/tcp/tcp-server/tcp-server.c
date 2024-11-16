//include necessary header file

int main(int argc, char* argv[]) {
  int sport;
  if(argc>1)
    sport = stroul(argv[1], NULL,10);
  else
    sport = 8000;

  int ssd;	
  ssd = socket(AF_INET, SOCK_STREAM, 0);
  if(sd<0) 	perror("socket");

  struct sockaddr_in  saddr;
  //bzero(&saddr, sizeof(addr));
  saddr.sin_family = AF_INET;
  saddr.sin_port = htons(sport);
  addr.sin_addr = inet_addr("127.0.0.1");
  bzero(&saddr.sin_zero, sizeof(saddr.sin_zero);

  ret=bind(ssd, (struct sockaddr*) &sddr, 
				sizeof(struct sockaddr_in));
  if(ret<0) {
	perror("bind");
  }

  ret = listen(ssd, backlog);		
  if(ret<0) perror("listen");

  struct sockaddr_in caddr;
  socklen_t len=0;
  csd = accept(ssd,  (struct sockaddr*)&caddr, &len); //block for client conn
  if(csd<0) {
	   perror("accept");
  }
  //print ntohs(caddr.sin_port), inet_ntoa(addr.sin_addr)

  //Using csd do read, write operations -- send, recv APIs

  close(csd);
  close(ssd);

  return 0;
}
