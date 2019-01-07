//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_FILECACHEMANAGER_H
#define PROJECT2_FILECACHEMANAGER_H

#include "CacheManager.h"
class FileCacheManager : CacheManager <class P, class S> {
public:
    //save the problem and solution to the file/disc.
    void save(const P& problem , const S& solution);
    //get the solution for the problem
    S get(const P& problem);
    //will check the hash map or file/disc for exiting solution and return true or false
    bool check(const P& problem);
};


#endif //PROJECT2_FILECACHEMANAGER_H
