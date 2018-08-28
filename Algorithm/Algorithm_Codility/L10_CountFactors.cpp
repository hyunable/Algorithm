//
//  L10_CountFactors.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 28..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Task
 - 양수 D는 양수 N의 인자이다.
 - Given : 양수 N
 - Complexity : space : O(sqrt(N)) / time : O(1)
 - Return : factor(인자)의 갯수.
 */

/*
 [ cmath function ]
 
 - 내림 : floor(float)
 - 올림 : ceil(float)
 - 제곱근 : sqrt(int)       / *sqrt : square Root
 - 제곱 : pow(a,b) => a의 b승
 */

/*
 Solution
 - 35% : (예외처리)sqrt가 정수일 경우 (자기자신을 포함할경우 ) 에는 *2가 아닌, 하나만 카운트 되어야한다.
 */

#include <iostream>
#include <cmath>

using namespace std;


int solution(int N) {
    float halfPoint = sqrt(N);
    int countFactor = 0;
    
    //제곱근이 factor에 포함되는 경우
    if ((int)halfPoint == halfPoint) {
        countFactor +=1;
    }
    for (int i = 1; i < halfPoint; i++) {
        if ( N % i == 0) {
            countFactor += 2;
        }
    }
    return countFactor;
}

int main() {
    cout << "factot : " << solution(24) << endl;
}
