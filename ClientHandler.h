//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_CLIENTHANDLER_H
#define PROJECT2_CLIENTHANDLER_H

#include <iostream>


class ClientHandler {
public:
    void HandleClient(std::istream request, std::ostream answer);

};


#endif //PROJECT2_CLIENTHANDLER_H
