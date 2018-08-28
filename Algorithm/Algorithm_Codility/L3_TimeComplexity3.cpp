//
//  L2_TimeComplexity3.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 24..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task :: TapeEquilibrium
 A non-empty array A consisting of N integers is given. Array A represents numbers on a tape.
 */


#include <vector>
#include <iostream>

using namespace std;

int solution3(vector<int> &A) {
    int sum = 0;
    int _sum = 0;
    int result = 987654321;
    for (auto &n: A)
        sum += n;
    
    for (auto it = A.begin(); it != A.end()-1; it++){
        _sum += *it;
        if (abs(sum - _sum*2) < result)
            result = abs(sum - _sum*2);
    }
    return result;
}


//int main() {
//    vector<int> v1 = {3, 1,2,4,3};
//    cout << solution3(v1) << endl;
//    return 0;
//}
