//
//  CodingTest_03.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 순열문제
 - fatorial 사용 / 재귀
 - leading zero 소거(예외처리)
 - complexity : complexity : O(logn) => for문 불가 ,  O(1)
 */

/*
 Bug
 
 */

#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <unordered_map>

using namespace std;

int factorial(int N){
    return (N == 1 || N == 0) ? 1 : factorial(N - 1) * N;
}

int solution(int N) {
    string inputNum = to_string(N);
    unordered_map<char, int> inputMap;
    
    int total = (int)inputNum.size();
    int result = 0;
    int overlap = 0;
    int zeroCount = 0;
    
    for(auto &c : inputNum) {
        inputMap[c] += 1;
    }
    

    for(auto &c : inputMap) {
        //중복 count
        if (c.second > 1) {
            overlap += c.second;
        }
        
        //0count
        if(c.first == '0') {
            zeroCount = c.second;
        }
    }
    
    result += factorial(total);
    result /= factorial(overlap);
    result -= zeroCount;
    
    return result;

}

int main() {
    cout << solution(1213) << endl;
    //12
    cout << solution(12332) << endl;
    //30
    cout << solution(2233300) << endl;
    //150
    cout << solution(1100) << endl;
    //3
}
