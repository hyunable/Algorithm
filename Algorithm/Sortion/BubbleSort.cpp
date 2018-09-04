//
//  BubbleSort.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 4..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr){
    int lengh = arr.size();
    for(int i = 0; i< lengh; i++) {    //i = 몇번째 순회인지 알려준다
        for(int j = 0; j < lengh-i; j++){
            if(arr[j] > arr[j+1])
                iter_swap(arr.begin()+j,arr.begin()+j+1)
                }
    }
}

//TMI :: SWAP 구현
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
