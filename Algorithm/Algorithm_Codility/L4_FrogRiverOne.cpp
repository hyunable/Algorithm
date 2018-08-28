//
//  L3_FrogRiverOne.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <vector>
#include <iostream>

using namespace std;


/*
 Task
 A small frog wants to get to the other side of a river. The frog is initially located on one bank of the river (position 0) and wants to get to the opposite bank (position X+1). Leaves fall from a tree onto the surface of the river.
 
 - Range :
 - Goal : The goal is to find the earliest time when the frog can jump to the other side of the river.
 - Return : 건널수 없을때 : -1 , or returns the earliest time when the frog can jump to the other side of the river.
 */


int solution33(int X, vector<int> &A) {
    //time : value , index : position
    vector<int> postion(X+1,-1);
    int time = 0;
    int count = 0;
    for (auto &n : A) {
        if (postion[n] < 0 && n <= X) {
            postion.at(n) = time;
            
            count++;
            if (count == X)
                return postion[n];
        }
        time++;
    }
    
    return -1;
}


