#include <arpa/inet.h>
#include <linux/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int sport;
  if (argc > 1)
    sport = strtoul(argv[1], NULL, 10);
  else
    sport = 8000;

  int ssd, csd, ret, backlog;
  ssd = socket(AF_INET, SOCK_STREAM, 0);
  if (ssd < 0)
    perror("socket");

  struct sockaddr_in saddr;
  // bzero(&saddr, sizeof(addr));
  saddr.sin_family = AF_INET;
  saddr.sin_port = htons(sport);
  saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  bzero(&saddr.sin_zero, sizeof(saddr.sin_zero));

  ret = bind(ssd, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in));
  if (ret < 0) {
    perror("bind");
  }

  ret = listen(ssd, backlog);
  if (ret < 0)
    perror("listen");

  struct sockaddr_in caddr;
  socklen_t len = sizeof(struct sockaddr_in);

  fd_set active_fd_set, read_fd_set;
  FD_ZERO(&active_fd_set);
  FD_SET(ssd, &active_fd_set);

  int maxfd, i, nbytes, maxlen=64;
  char buf[64];
  maxfd = ssd;
  while (1) {
    read_fd_set = active_fd_set;
    ret = select(maxfd + 1, &read_fd_set, NULL, NULL, NULL);
    for (i = 0; i < maxfd + 1; ++i) {
      if(FD_ISSET(i,&read_fd_set)) {
      if (i == ssd) {
        csd = accept(ssd, (struct sockaddr *)&caddr, &len);
        FD_SET(csd, &active_fd_set);
        if (csd > maxfd)
          maxfd = csd; // update maxfd if required
        printf("client (%d) got connected from %s:%d\n", csd, inet_ntoa(caddr.sin_addr),
               ntohs(caddr.sin_port));
      }
      else { // already connected clients (sending data or FIN)
        csd = i;
        nbytes = recv(csd, buf, maxlen, 0);
        if (nbytes == 0) {
          close(csd);
          FD_CLR(i, &active_fd_set);
          printf("closing client conn : %d\n", csd);
        }
        printf("received data from : %d\n", csd);
        nbytes = send(csd, buf, nbytes,0); // echo back
     }
    }
  }
  }
  return 0;
}
