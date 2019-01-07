//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_MYSERIALSERVER_H
#define PROJECT2_MYSERIALSERVER_H

#include "Server.h"
class MySerialServer : public server_side::Server {
public:
    virtual void Open(int port, ClientHandler ClientH);

    virtual void Stop();


};


#endif //PROJECT2_MYSERIALSERVER_H
