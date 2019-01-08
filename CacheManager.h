//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_CACHEMANAGER_H
#define PROJECT2_CACHEMANAGER_H

#include <unordered_map>
using namespace std;
template <class P, class S>
class CacheManager {
public:
    unordered_map< P, S> problemMap;
    //save the problem and solution to the file/disc.
    virtual void saveToMap(P problem , S solution) = 0;
    //get the solution for the problem
    virtual S get(P problem) = 0;
    //will check the hash map or file/disc for exiting solution and return true or false
    virtual bool checkMap(P problem) = 0;

};


#endif //PROJECT2_CACHEMANAGER_H
