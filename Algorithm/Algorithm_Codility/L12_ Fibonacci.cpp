//
//  L12_ Fibonacci.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 22..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int fibonacciNumber(int N) {
    return N < 2 ? N : fibonacciNumber(N-1) + fibonacciNumber(N-2);
}

int solution(vector<int> &A) {
    int lengh = (int)A.size();
    int shortestJump = lengh;
    
    A.insert(A.begin()+lengh, 1);
    
    int point = -1;
    int result = -1;
    
    
    for (int i=0; i <= lengh ; i++) {
        if(A[i] == 1 && A[i+1] == 0){
            if (shortestJump > (i - point))
                shortestJump = (i - point);
            point = i;
        }
    }
    
    for (int j = 0; j < lengh; j++) {
        if (fibonacciNumber(j) == shortestJump){
            result = j;
            break;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {0,0,0,1,1,0,1,0,0,0,0};
    cout << solution(arr) << endl;
}
