//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_CLIENTHANDLER_H
#define PROJECT2_CLIENTHANDLER_H

#include <iostream>


class ClientHandler {
public:
    virtual void handleClient(int socket) = 0;

};


#endif //PROJECT2_CLIENTHANDLER_H
