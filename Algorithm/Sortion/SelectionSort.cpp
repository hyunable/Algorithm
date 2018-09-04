//
//  SelectSort.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 4..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <vector>
#include <iostream>

using namespace std;

void selectionSort(vector<int> &A) {
    const int lengh = (int)A.size();
    for (int i = 0; i< lengh; i++) {
        for(int j = i+1; j < lengh; j++) {
            if(A[i] > A[j])
                iter_swap(A.begin()+i, A.begin()+j);
        }
    }
}


int main() {
    vector<int> m = {10,3,4,5,1,2,8};
    selectionSort(m);
    for(auto &n : m) {
        cout << n << endl;;
    }
}
