//
//  CodingTest_01.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
    int minValue = INT_MAX;
    int inputLength = (int) A.size();
    
    for (int i=0; i< inputLength; i++) {
        int sumRotateCount = 0;
        for (int j =0; j < inputLength; j++) {
            sumRotateCount += A[i] + A[j] == 7 ? 2 : A[i] == A[j] ? 0 : 1;
        }
        minValue = sumRotateCount < minValue ? sumRotateCount : minValue;
    }
    return minValue;
}

int main() {
    vector<int> v1 = {1, 6, 2, 3};
    cout << "result" <<solution(v1) << endl;
    return 0;
    //retrun 3
}
