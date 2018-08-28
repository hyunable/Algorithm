//
//  L2_TimeComplexity2.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 24..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task:
 An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
 
 Your goal is to find that missing element.
 
 - expected worst-case time complexity is O(N);
 - expected worst-case space complexity is O(1)
 
 */


#include <vector>
#include <iostream>

using namespace std;

int solution2(vector<int> &A) {
    unsigned long sum = 0;
    unsigned long _sum = (1 + A.size()+1) * (A.size()+1) /2;
    for (auto it = A.begin() ; it != A.end() ; it++) {
        sum += *it;
    }
    return (int)(_sum - sum);
}

//
//
//int main() {
//    vector<int> v1 = {3, 1,2,5,6};
//    cout << solution22(v1) << endl;
//    return 0;
//}
