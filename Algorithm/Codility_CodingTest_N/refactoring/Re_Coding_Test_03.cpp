//
//  Re_Coding_Test_03.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 1..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/* 3번째문제 : 에너그램 */

/*
 Bug : 기존 코드의 버그
 - 0이 앞에 오게되는 case를 숫자만큼만 빼줌. 0이 중복됬을 경우에는 통과하지 않는다.
 - 중복제거를 잘못해줌 n! m! 으로 나눠줘야 하는데 전체 중복갯수 만큼 팩토리얼을 해줬다.
 */

/*
 refactoring
 - 바로 return 할 수 있는 부분은 변수에 담지말고 바로 반환한다 (ex, result).
 -
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
    int overlap = 1;
    int zeroCount = 0;
    
    for(auto &c : inputNum)
        inputMap[c] += 1;
    
    for(auto &c : inputMap) {
        //중복 count, 각 종류 만큼 한다.
        if (c.second > 1)
            overlap *= factorial(c.second);
        
        //0count
        if(c.first == '0')
            zeroCount = c.second;
    }
    
    return (total - zeroCount) * factorial(total-1) / overlap;
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


