//
//  L8_Dominator.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 leader : Find an index of an array such that its value occurs at more than half of indices in the array.
 
 - Range : N = [0..100,000]
 - Return : Dominarot의 any index를 return
 */
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> &A) {
    unordered_map<int, int> m;
    
    int i = 0;
    for (auto &n : A){
        m[n] += 1;
        if (m[n] > A.size() / 2) {
            return i;
        }
        i++;
    }
    return -1;
    
}
