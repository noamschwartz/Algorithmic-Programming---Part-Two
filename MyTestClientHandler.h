//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_MYTESTCLIENTHANDLER_H
#define PROJECT2_MYTESTCLIENTHANDLER_H

#include "Solver.h"
#include "ClientHandler.h"
#include "CacheManager.h"
class MyTestClientHandler : public ClientHandler {

    Solver<string, string> *solver;
    CacheManager<string, string> *cm;
public:
    MyTestClientHandler(Solver<string, string> *solve, CacheManager<string, string> *cacheManage);
    void handleClient(int socket);
    string readFromSocket(int socket);
};


#endif //PROJECT2_MYTESTCLIENTHANDLER_H
