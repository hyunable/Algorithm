//
//  L9_MaxSliceSum.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 Find a maximum sum of a compact subsequence of array elements.
 
 - Range : Int
 - Complexity : time O(N), space O(N)
 - Return : that, given an array A consisting of N integers, returns the maximum sum of any slice of A.
 */

/*
 Solution
 - prefixsum!
 
 - 53% => 구간인데, 자기자신 (ex, (1,1) ) 만 포함하는 경우를 max 검사할때 넣어주지 않아서 에러
 - 69% => 전부 negative일때 , 빼는쪽이 Negative일때는 prefix sum 인덱스 값보다 큰 경우가 잇다!// [-2,1,1] got 1 , expected 2
 - 88% = > Growth negative ..ㅠ포기
 */
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    vector<int> v(A.size());
    
    int i = 0;
    int max = *A.begin();
    //prefix sum
    for(auto &n : A){
        v.at(i) = (i == 0 ? 0 : v[i-1]) + n;
        if (max < n)
            max = n;
        i++;
    }
    
    auto min = v.begin();
    auto sumMax = v.begin();
    int sum = 0;

    for(auto it = v.begin(); it != v.end() ; it++){
        if (*sumMax < *it)
            sumMax = it;
        if(*min > *it)
            min = it;
    }
    if (sumMax > min && *min < 0){ //min이 유효하면
        sum = *sumMax - *min;
    } else {
        sum = *sumMax;
    }
    return max > sum ? max : sum;
}

int main() {
    vector<int> v1 = {-2,1,1};
    cout << "result" <<solution(v1) << endl;
    return 0;
    //retrun 5
}
