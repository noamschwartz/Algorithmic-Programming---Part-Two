//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_SERVER_H
#define PROJECT2_SERVER_H

#include "ClientHandler.h"
namespace server_side {
    class Server {
    public:
        virtual void Open(int port, ClientHandler ClientH) = 0;

        virtual void Stop() = 0;


    };
}
#endif //PROJECT2_SERVER_H
