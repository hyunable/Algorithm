//
//  L6_Distinct.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 
 - Goal : 숫자의 종류를 구해라
 - Return :
 */
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution6_1(vector<int> &A) {
    unordered_map<int, int> m;
    for (auto &n : A)
        m[n] += 1;
    return (int) m.size();
}
