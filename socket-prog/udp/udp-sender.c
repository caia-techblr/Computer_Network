#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])            // ./udp-rcvr 1500
{
    char* rx_ip;
    int rx_port;
    if(argc>2) {
        rx_ip = argv[1];
        rx_port = strtoul(argv[2],NULL,10);
    }
    else {
        fprintf(stderr, "usage %s <ipaddr> <portno>\n", argv[0]);
        exit(1);
    }
        
    int tx_sd, ret;
    tx_sd=socket(AF_INET, SOCK_DGRAM, 0);
    if(tx_sd < 0) {
        perror("socket");
        exit(1);
    }
    
    //optional bind for sender
    
    struct sockaddr_in rx_addr;
    rx_addr.sin_family = AF_INET;
    rx_addr.sin_port = htons(rx_port);    
    rx_addr.sin_addr.s_addr = inet_addr(rx_ip);
 
    
    int nbytes;
    char *tx_msg = "Hello UDP";
    int tx_len = strlen(tx_msg);
    
    nbytes = sendto(tx_sd, tx_msg, tx_len, 0, (struct sockaddr*)&rx_addr, sizeof(rx_addr));
    if(nbytes < 0) {
        perror("sendto");
        exit(1);
    }
    printf("Sent message successfully\n");
       
    close(tx_sd);
    
    return 0;
}
