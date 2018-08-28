//
//  L11_CountNonDivisible.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 28..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task

 - Given : an array A consisting of N integers
 - Complexity : time : O(N*log(N)) / space : O(N)
 - Return : eturns a sequence of integers representing the amount of non-divisors.
 */

/*
 Solution
// { 3,1,2,3,6 } => { 2, 4, 3, 2, 0 }
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

//약수구하기
vector<int> erasto(int index, vector<int> &Arr) {
    vector<int> factors = {};
    for (int i = 1; i < sqrt(Arr[index]); i++) {
        if( Arr[index] % i == 0){
            factors.push_back(i);
            factors.push_back(Arr[index] / i);
        }
    }
    return factors;
}

vector<int> solution(vector<int> &A) {
    int total = (int)A.size();
    vector<int> resultArr(A.size());
    
    for (int i = 0; i < A.size(); i++) {
        auto arr = erasto(i, A);
        resultArr.push_back(total - (int)count(arr.begin(), arr.end(), arr));
    }
    return resultArr;
}

int main() {
    vector<int> arr = {3,1,2,3,6};
    solution(arr);
    //expected 22
}




//solution
vector<int> solution(vector<int> &A) {
    
    int N = A.size();
    vector<int> counts (*std::max_element(A.begin(), A.end()) + 1,0);
    
    // Calculate occurences of each number in the array
    for (int i = 0; i < N; ++i)
    {
        counts[A[i]] += 1;
    }
    
    std::vector<int> answer(N,0);
    
    // For each element of the array
    for (int i = 0; i < N; ++i)
    {
        // Calulate how many of its divisors are in the array
        int divisors = 0;
        
        for (int j = 1; j * j <= A[i]; ++j)
        {
            if (A[i] % j == 0)
            {
                divisors += counts[j];
                if (A[i] / j != j)
                {
                    divisors += counts[A[i] / j];
                }
            }
        }
        
        // Subtract the number of divisors from the number of elements in the array
        answer[i] = N - divisors;
    }
    
    return answer;
}
