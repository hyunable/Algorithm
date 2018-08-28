//
//  L2_TimeComplexity.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 24..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task
 A small frog wants to get to the other side of the road. The frog is currently located at position X and wants to get to a position greater than or equal to Y. The small frog always jumps a fixed distance, D.
 
 that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.
 
 */

#include <vector>
#include <iostream>

using namespace std;

/*
 solution
 - 시간복잡도가 O(1) 이기 때문에, for문을 돌게 되면 초과한다.
 */

//int solution1(int X, int Y, int D) {
//    return (Y - X) / D ;
//
//}

int solution(int X, int Y, int D) {
    return (Y - X) % D == 0 ? (Y - X) / D : (Y - X) / D + 1;
}

