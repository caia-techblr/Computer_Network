#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])            // ./udp-rcvr 1500
{
    int rx_port;
    if(argc>1)
        rx_port = strtoul(argv[1],NULL,10);
    else {
        fprintf(stderr, "usage %s <portno>\n", argv[0]);
        exit(1);
    }
        
    int rx_sd, ret;
    rx_sd=socket(AF_INET, SOCK_DGRAM, 0);
    if(rx_sd < 0) {
        perror("socket");
        exit(1);
    }
    
    struct sockaddr_in rx_addr;
    //char* rx_ip ="127.0.0.1";
    rx_addr.sin_family = AF_INET;
    rx_addr.sin_port = htons(rx_port);    
    rx_addr.sin_addr.s_addr = INADDR_ANY;
    //serv_addr.sin_addr.s_addr=inet_addr(rx_ip);
    ret = bind(rx_sd, (struct sockaddr*)&rx_addr, sizeof(rx_addr));
    if(ret < 0) {
        perror("bind");
        exit(1);
    }
    
    int nbytes,maxlen=64;
    char rx_buf[maxlen];
    struct sockaddr_in tx_addr;
    int tx_len=sizeof(tx_addr);    
    
    nbytes = recvfrom(rx_sd, rx_buf, maxlen, 0, (struct sockaddr*)&tx_addr, &tx_len);
    if(nbytes < 0) {
        perror("recvfrom");
        exit(1);
    }
    rx_buf[nbytes]='\0';
    printf("Received from sender : %s\n", rx_buf);
    // write(1, rx_buf, nbytes);
    
    close(rx_sd);
    
    return 0;
}
