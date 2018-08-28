//
//  L6_MaxProductOfThree.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task :: Sort 함수 쓰기
 A non-empty array A consisting of N integers is given. The product of triplet (P, Q, R) equates to A[P] * A[Q] * A[R] (0 ≤ P < Q < R < N).
 
 - Range : [−1,000..1,000].
 - Goal : Your goal is to find the maximal product of any triplet.
 - Return : that, given a non-empty array A, returns the value of the maximal product of any triplet.
 */

/*
 Solution
 - 음수가 두개 이상일 경우, 두개의 음수의 절댓값이 더 클 경우 양수가 되므로 인덱스 뒤에서 3개만 곱해줘서는 답이 나오지 않는다.
 */

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution6_2(vector<int> &A) {
    int size = (int) A.size();
    int result;
    int _result;
    sort(A.begin(), A.end());
    
    result = A[size-1] * A[size - 2] * A[size -3];
    _result = A[0] * A[1] * A[size -1];
    return result > _result ? result : _result;
}


