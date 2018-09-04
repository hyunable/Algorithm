//
//  QuickSort.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 4..
//  Copyright © 2018년 hyunable. All rights reserved.
//
#include <iostream>
#include <array>

using namespace std;

int choosePivot(int low, int high) {
    return low + (high-low)/2;
}

int partition(int low, int high, int* array) {
    int pivotIndex = choosePivot(low, high);
    int pivotValue = array[pivotIndex];
    
    //앞으로 빼놓는다
    swap(array[low], array[pivotIndex]);
    
    int storeIndex = high;
    for (int i = high; i>low; i--) {
        if (pivotValue < array[i]) {
            if(storeIndex != i){
                swap(array[storeIndex], array[i]);
            }
            storeIndex--;
        }
    }
    
    swap(array[low], array[storeIndex]);
    
    return storeIndex;
}

void quickSort(int low, int high, int* array) {
    if (low < high) {
        int pivot = partition(low, high, array);
        quickSort(low, pivot-1, array);
        quickSort(pivot+1, high, array);
    }
}
