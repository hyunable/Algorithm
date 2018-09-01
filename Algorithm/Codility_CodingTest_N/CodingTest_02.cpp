//
//  CodingTest_02.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/**
 * digit[0]의 범위 [0,2]
 * digit[1]의 범위 [0,9]
 * digit[2]의 범위 [0,5]
 * digit[3]의 범위 [0,9]
 * digit[4]의 범위 [0,5]
 * digit[5]의 범위 [0,9]
 * input의 범위 [0,0]
 * 즉
 * 1. inputArr[4]가 6보다 작으면 전체 성립
 * 2. inputArr[4]가 6보다 크거나 같고 inputArr[3]이 6보다 작으면 3,4만 교체
 * 3. inputArr[4], inputArr[3]가 6보다 크거나 같고 inputArr[2] 가 6보다 작으면 1을 3로, 3를 4로 교체
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string NOT_POSSIBLE = "NOT POSSIBLE";

bool validater(vector<int> &input) {
    if (input[0] > 2)
        return true;
    if (input[0] == 2 && input[1] > 3)
        return true;
    if(input[2] > 5)
        return true;
    if(input[4] > 5)
        return true;
    
    return false;
}

string printArr(vector<int> &resultArr) {
    string resultStr = "";
    for (int i = 0; i < (int)resultArr.size(); i++) {
        if (i % 2 == 0 && i != 0) {
            resultStr += ":";
        }
        resultStr += to_string(resultArr[i]);
    }
    return resultStr;
}

string solution(int A, int B, int C, int D, int E, int F) {
    vector<int> inputArr = { A , B , C , D , E , F };
    sort(inputArr.begin(), inputArr.end());
    
    if (inputArr[4] >= 6 && inputArr[3] < 6) {
        iter_swap(inputArr.begin()+3, inputArr.begin()+4);
    } else if (inputArr[4] >= 6 && inputArr[3] >= 6 && inputArr[2] < 2) {
        iter_swap(inputArr.begin()+3, inputArr.begin()+1);
        iter_swap(inputArr.begin()+3, inputArr.begin()+4);
    }
    
    if (validater(inputArr))
        return NOT_POSSIBLE;
    else {
        return printArr(inputArr);
    }
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
    cout << solution(1,4,4,5,5,5) << endl;
    //not possible
}

