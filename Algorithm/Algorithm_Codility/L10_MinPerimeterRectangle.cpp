//
//  L10_MinPerimeterRectangle.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 28..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task
 The goal is to find the minimal perimeter of any rectangle whose area equals N. The sides of this rectangle should be only integers.
 
 ** perimeter : 둘레
 - Given : 면적 N (단, lengh는 intergen)
 - Complexity : space : O(sqrt(N)) / time : O(1)
 - Return : 면적N을 갖는 정사각형 중 minimal perimeter

 */

/*
 Solution
 약수 중, pair끼리 가장 작은 차를 보이는 쌍이 합에서 가장 적다.
 - 80% : 제곱근이 포함된 경우를 안해줌.
 */
#include <iostream>
#include <cmath>

using namespace std;

int solution(int N) {
    float halfPoint = sqrt(N);
    int maxNum = 1;
    
    for (int i = 1; i <= halfPoint; i++) {
        if(maxNum < i && N % i == 0 )
            maxNum = i;
    }
    return (maxNum + (N /maxNum)) * 2;
}

int main() {
    cout << "result :" <<solution(1000000) << endl;
//expected 22
}
