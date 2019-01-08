//
// Created by noam on 07/01/19.
//

#include <algorithm>
#include <iostream>
#include "StringReverser.h"

using namespace std;
const string& solve(string& problem){

    string &result = problem;
    reverse(result.begin(), result.end());
    result.push_back('\r');
    result.push_back('\n');
    return result;

}
