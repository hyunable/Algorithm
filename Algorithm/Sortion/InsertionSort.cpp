//
//  InsertionSort.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 4..
//  Copyright © 2018년 hyunable. All rights reserved.
//
#include <vector>
#include <iostream>

using namespace std;

void insertSort(vector<int> &arr) {
    int lengh = (int)arr.size();
    for (int i = 1; i< lengh; i++) {
        for (int j = i; j >= 0; j--) {
            if (arr[j] < arr[j-1])
                iter_swap(arr.begin()+j, arr.begin()+(j-1));
        }
    }
}


int main() {
    vector<int> m = {10,9,6,4,5,1,2,3,8,7};
    insertSort(m);
    for(auto &n : m) {
        cout << n << endl;;
    }
}
