//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_MYTESTCLIENTHANDLER_H
#define PROJECT2_MYTESTCLIENTHANDLER_H

#include "Solver.h"
#include "ClientHandler.h"
#include "CacheManager.h"
class MyTestClientHandler : public ClientHandler {

    Solver  <class P, class S> *solver;
    CacheManager  <class P, class S> *cm;
public:

};


#endif //PROJECT2_MYTESTCLIENTHANDLER_H
