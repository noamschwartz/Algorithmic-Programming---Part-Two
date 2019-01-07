//
// Created by noam on 07/01/19.
//

#ifndef PROJECT2_SOLVER_H
#define PROJECT2_SOLVER_H

template <class P, class S>
class Solver {
public:
    virtual const S& solve(P& p) = 0;


};


#endif //PROJECT2_SOLVER_H
