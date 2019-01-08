//
// Created by noam on 07/01/19.
//

#include <fstream>
#include "FileCacheManager.h"

template<class P, class S>
FileCacheManager<P, S>::FileCacheManager(const string fName) {
    this->fileName = fName;
    createMap();
}

template<class P, class S>
void FileCacheManager<P, S>::saveToMap(P problem, const S solution) {
    this->probSol.insert(pair<P, S>(problem, solution));


}
template<class P, class S>
void FileCacheManager<P, S>::createMap() {
    ifstream myFile(fileName);
    if (myFile.is_open()) {
        unsigned long int objsNum;
        //NEED TO CHECK IF THIS MAKES THR IFSTREAM GO A ROW BELOW
        myFile >> objsNum;
        //skipping two because every two rows theres a problem and a solution
        for (unsigned long int i = 0; i < objsNum; i+=2) {
            P prob;
            S sol;
            //ALSO HERE- NEED TO CHECK IF THIS MAKES THR IFSTREAM GO A ROW BELOW
            myFile>>prob;
            myFile>>sol;
            probSol.insert(pair<P, S> (prob, sol));
        }
    }

    myFile.close();


}

template<class P, class S>
S FileCacheManager<P, S>::get(P problem) {
    typename::unordered_map<P, S>::iterator it;
    for (it = probSol.begin(); it != probSol.end(); ++it) {
        if (it->first == problem) {
            return it->second;
        }
    }
    throw "no saved solution for that problem";
    return nullptr;
}

template<class P, class S>
bool FileCacheManager<P, S>::checkMap(P problem) {
    typename::unordered_map<P, S>::iterator it;
    for (it = probSol.begin(); it != probSol.end(); ++it) {
        if (it->first == problem) {
            return true;
        }
    }
    return false;
}

template<class P, class S>
void FileCacheManager<P, S>::saveToFile(P problem, S solution) {
    ofstream myFile(fileName);
    if (myFile.is_open()) {
        //saving number of problems and solutions to file
        myFile << probSol.size() << endl;
        typename::unordered_map<P, S>::iterator it;
        for (it = probSol.begin(); it != probSol.end(); ++it) {
            myFile << it->first << endl << it->second << endl;
        }
    }

    myFile.close();

}


