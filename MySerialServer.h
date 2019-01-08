//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_MYSERIALSERVER_H
#define PROJECT2_MYSERIALSERVER_H

#include "Server.h"
#include <chrono>
#include <thread>
using namespace std;
class MySerialServer : public server_side::Server {
    int newsockfd;
    int mySockfd;
    bool stop = false;
public:
     void Open(int port, ClientHandler *ClientH);

     static void listenTo(int sockfd, struct sockaddr_in address, int addrlen, ClientHandler *ClientH);

     void Stop();


};


#endif //PROJECT2_MYSERIALSERVER_H
