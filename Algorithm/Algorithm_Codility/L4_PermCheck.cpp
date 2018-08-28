//
//  L3_CountingElements.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

/*
 Task : PermCheck
 A permutation is a sequence containing each element from 1 to N once, and only once.

 - Goal : Check whether array A is a permutation.
 - Return : if permutation Array return 1, or not 0
 */

/*
 Solution
 - 1. 100% (30min) => 오예, 두 맵의 상등이 될 수있다는 점을 이용해서 풀었다.
      단, 단위의 범위를 확인하지 않고 풀었다. 앞으로는 range를 체크하며 풀자
 */


int solution4(vector<int> &A) {
    unordered_map<int, int> m;
    unordered_map<int, int> _m;
    
    int i = 1;
    for (auto it = A.begin(); it != A.end(); it++) {
        m[*it] = *it;
        _m[i] = i;
        i++;
    }
    
    return m == _m ? 1 : 0;
    
}
