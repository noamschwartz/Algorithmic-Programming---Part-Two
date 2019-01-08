//
// Created by noam on 07/01/19.
//


#include <memory.h>
#include <strings.h>
#include <bits/socket_type.h>
#include <bits/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include "MySerialServer.h"

void MySerialServer::Open(int port, ClientHandler *ClientH) {


    int sockfd, new_socket, valread;
    //char buffer[1024];
    struct sockaddr_in serv_addr;
    int addrlen = sizeof(serv_addr);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }
    /* Initialize socket structure */
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);
    //bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr));
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }
    this->mySockfd = sockfd;
    /* Now start listening for the clients, here process will
   * go in sleep mode and will wait for the incoming connection
*/
    listen(sockfd, 5);
//    listenToClient(sockfd,address,addrlen,c);
    std::thread first(listenTo, sockfd, serv_addr, addrlen, ClientH);
    first.detach();





}

void MySerialServer::listenTo(int sockfd, struct sockaddr_in address, int addrlen, ClientHandler *ClientH) {
    int newSocket;
    //clilen = sizeof(cli_addr);
    while (true) {
        /* Accept actual connection from the client */
        newSocket = accept(sockfd, (struct sockaddr *) &address, (socklen_t *) &addrlen);

        if (newSocket < 0) {
            perror("ERROR on accept");
            exit(1);
        }
        ClientH->handleClient(newSocket);
        //sleep here??
        //this_thread::sleep_for(chrono::milliseconds(int(250)));
    }

}

void MySerialServer::Stop() {
          close(mySockfd);
    }
