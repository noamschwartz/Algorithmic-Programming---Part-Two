//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_STRINGREVERSER_H
#define PROJECT2_STRINGREVERSER_H


#include "Solver.h"
#include <string>

using namespace std;
class StringReverser : public Solver<class P, class S> {
public:
    const string& solve(string& problem);
};


#endif //PROJECT2_STRINGREVERSER_H
