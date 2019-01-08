//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_FILECACHEMANAGER_H
#define PROJECT2_FILECACHEMANAGER_H

#include <unordered_map>
#include "CacheManager.h"

using namespace std;
template <class P, class S>
class FileCacheManager : CacheManager <P, S> {

    unordered_map<P, S> probSol;
    string fileName;

public:
    FileCacheManager(const string fName);
    void createMap();
    //save the problem and solution to the file.
    virtual void saveToMap(P problem , S solution);
    void saveToFile(P problem, S solution);
    //get the solution for the problem
    virtual S get(P problem);
    //will check the hash map or file for exiting solution and return true or false
    virtual bool checkMap(P problem);
};



#endif //PROJECT2_FILECACHEMANAGER_H
