//
//  L9_Max.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 An array A consisting of N integers is given. It contains daily prices of a stock share for a period of N consecutive days. If a single share was bought on day P and sold on day Q, where 0 ≤ P ≤ Q < N, then the profit of such transaction is equal to A[Q] − A[P], provided that A[Q] ≥ A[P]. Otherwise, the transaction brings loss of A[P] − A[Q].
 
     P : 산날, Q : 판날
     A[Q] - A[P] : profit (두 날의 price 차이)
 
 - Range : N = [0..400,000] , price = [0..200,000]
 - Goal : Maximum possible profit. ( or 0 )
 - Return : returns the maximum possible profit from one transaction during this period. The function should return 0 if it was impossible to gain any profit.
 */

/*
 Solution
 - prefix sum 으로 풀어야겠다고 생각듬. -> O(n2) 나옴
 - sorting으로 하면 인덱스가 섞이기 때문에 이득인지 손해인지 알 수 없음.
 
 - 1. 88% => empty 배열일때 생각안해줌. => 삼항연산자로 예외처리
 */

//ptrdiff_t pos = distance(Names.begin(), find(Names.begin(), Names.end(), old_name_));

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int min = A.empty() ? 0 : *A.begin();
    int max = 0;
    
    for (auto &n : A) {
        if (min > n)
            min = n;
        if( n - min > max)
            max = n-min;
    }
    return max;
}

int main() {
    vector<int> v1 = {23171, 21011, 21123, 21366, 21013, 21367};
    solution(v1);
    return 0;
}
