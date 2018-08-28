//
//  Test_11441.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 - input : 첫째 줄에 수의 개수 N이 주어진다. (1 ≤ N ≤ 100,000)
    둘째 줄에는 A1, A2, ..., AN이 주어진다. (-1,000 ≤ Ai ≤ 1,000)
    셋째 줄에는 구간의 개수 M이 주어진다. (1 ≤ M ≤ 100,000)
    넷째 줄부터 M개의 줄에는 각 구간을 나타내는 i와 j가 주어진다. (1 ≤ i ≤ j ≤ N)

 - Return : 총 M개의 줄에 걸쳐 입력으로 주어진 구간의 합을 출력한다.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arraySize;
int *arrayA;
int arr[3];

void inputArray() {
    cin >> arraySize;
    arrayA = new int[arraySize];
    
  
    
}


