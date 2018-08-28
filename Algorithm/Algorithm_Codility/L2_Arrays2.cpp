//
//  L2_Arrays2.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 24..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
/*
 A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.
 
 that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.
 
 Given: Araay
 Return : unfaired element
 
 ** 짝수(even number)는 2로 나누어떨어지는 정수이다. 홀수(odd number)는 2로 나누어떨어지지 않는 정수이다.
 */

/*
 solution
 1. 88% => timeout , 마지막 검색할때 for문을 다 돌지 않도록 return 처리해줌
 2. 88% => timeout , hash map 으로 변경해서 품
 */

/*
 C++ :: hash_map => deprecated!!
 unordered_map으로 변경됨.
 */

int solution2_3(vector<int> &A) {
    unordered_map<int, int> m;

    for (int i=0; i < A.size(); i++) {
        m[A[i]] += 1;
    }
    
    for (auto at = m.begin(); at != m.end(); at++) {
        if (at->second % 2 != 0)
            return at->first;   // -> first 는 key ,  second 는 value
    }
    return 0;
}


//int main() {
//    vector<int> v1 = {3, 9, 3, 9, 7};
//    solution(v1);
//}


