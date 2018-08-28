//
//  L4_PassingCars.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task
 The goal is to count passing cars. We say that a pair of cars (P, Q), where 0 ≤ P < Q < N, is passing when P is traveling to the east and Q is traveling to the west.
 
 - 0 represents a car traveling east,
 - 1 represents a car traveling west.
 
 */

#include <vector>
#include <iostream>

using namespace std;

int solution5(vector<int> &A) {
    
    int east = 0;
    int west = 0;
    
    int i = 0;
    int numberOfone = 0;
    int sumOfoneNumber = 0;
    
    for (auto &n : A) {
        if (n == 0) {
            east += 1;
        } else {
            west += 1;
        }
        if (i > 0 && A[i-1] == 1)
            sumOfoneNumber += 1;
        
        if( A[i] == 0)
            numberOfone += sumOfoneNumber;
        
        i++;
    }
    
    unsigned long result = (east * west - numberOfone);
    return result <= 1000000000 ? (int) result : -1;
}
