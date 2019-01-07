//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_CACHEMANAGER_H
#define PROJECT2_CACHEMANAGER_H

template <class P, class S>
class CacheManager {
public:
    //save the problem and solution to the file/disc.
    virtual void save(const P& problem , const S& solution) = 0;
    //get the solution for the problem
    virtual S get(const P& problem) = 0;
    //will check the hash map or file/disc for exiting solution and return true or false
    virtual bool check(const P& problem) = 0;

};


#endif //PROJECT2_CACHEMANAGER_H
