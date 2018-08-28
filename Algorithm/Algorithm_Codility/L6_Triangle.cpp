//
//  L6_Triangle.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
Task
that, given an array A consisting of N integers, returns 1 if there exists a triangular triplet for this array and returns 0 otherwise.

- Range :
 - Goal :
 A[P] + A[Q] > A[R],
 A[Q] + A[R] > A[P],
 A[R] + A[P] > A[Q].
 
 위에 등호가 성립하는 triplet(P,Q,R)이 존재하면 1 or not return 0
- Return : that, given an array A consisting of N integers, returns 1 if there exists a triangular triplet for this array and returns 0 otherwise
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

