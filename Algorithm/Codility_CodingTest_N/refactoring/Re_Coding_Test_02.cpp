//
//  Re_Coding_Test_02.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 1..
//  Copyright © 2018년 hyunable. All rights reserved.
//


/* 2번째문제 : 시계 */
/*
 Bug
 - 맨 앞자리에 2가오는 경우의 수를 고려하지 않았다.
 */

/*
 Solution
 
 ** not possible case
    - 가장 앞의 수가 2초과 || 2이상, 두번째 수가 4초과 일때
    - 5이하의 수가 3개 미만일때 (2,4번째 인덱스는 최대 5)

 - 0,1,2 중 하나를 포함한 5이하의 수가 3개일때 -> 나열 한다음 나머지 세개를 순서대로 인덱스 1,3,5에 삽입
 - 0,1,2 중 하나를 포함한 5이하의 수가 4개일때 -> 나열 한다음 나머지 두개를 순서대로 인덱스 3,5에 삽입
 - 0,1,2 중 하나를 포함한 5이하의 수가 5개이상 -> 무조건 통과 (그대로 소트)

 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

const string NOT_POSSIBLE = "NOT POSSIBLE";

string toDigit(vector<int> &A, int size) {
    string result = "";
    for(int i = 0; i < size ; i++){
        if(i % 2 == 0 && i > 0)
            result += ':';
        result += to_string(A[i]);
    }
    return result;
}

string solution(int A, int B, int C, int D, int E, int F) {
    vector<int> digitArr = {A,B,C,D,E,F};
    vector<int> resultArr(6,0);
    int point = 5;
    int insertPoint = -1;
    
    //sorting
    sort(digitArr.begin(), digitArr.end());
    
    //예외처리
    if(digitArr[0] > 2 || (digitArr[0] == 2 && digitArr[1] > 3)) {
        return NOT_POSSIBLE;
    }
    
    //6이상이 되기 직전의 인덱스를 구한다.
    for(int i = 0 ; i < digitArr.size() ; i++){
        if(digitArr[i] > 5){
            point = i-1;
            if(point < 2){
                return NOT_POSSIBLE;
            }
            break;
        }
    }
    
    //setting insertPoint
    switch (point) {
        case 2:
            insertPoint = 1;
            break;
        case 3:
            insertPoint = 3;
            break;
        case 4:
            insertPoint = 5;
            break;
        default:
            insertPoint = 6;
            break;
    }
    
    //setting
    for (int i = 0; i <= point; i++) {
        resultArr[i] = digitArr[i];
    }
    
    for (int j = insertPoint , k = point+1; j < digitArr.size(); j+=2, k++) {
        resultArr.insert(resultArr.begin()+j, digitArr[k]);
    }
    
    return toDigit(resultArr,(int)digitArr.size());
    
}

int main() {
    cout << solution(0, 0, 0, 0, 0, 0) << endl;
    //00:00:00
    cout << solution(0, 0, 0, 7, 8, 9) << endl;
    //07:08:09
    cout << solution(1, 8, 3, 2, 6, 4) << endl;
    //12:36:48
    cout << solution(2, 4, 5, 9, 5, 9) << endl;
    //not possible
    cout << solution(2, 4, 4, 9, 5, 9) << endl;
    //not possible
    cout << solution(1,4,4,5,5,5) << endl;
    //not possible
    cout << solution(1,1,2,9,8,9) << endl;
    //19:18:29
    
    //fail
    cout << solution(2,3,4,5,9,9) << endl;
    cout << solution(2,2,3,6,9,9) << endl;
    //26:29:39
}
