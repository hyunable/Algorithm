//
//  Test_2751.cpp
//  Algorithm_beakjun
//
//  Created by Hyunah on 2018. 8. 16..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
#include <array>

using namespace std;

//선택정렬
void selectionSort (int count, int* inputs) {
    for (int i=0; i<count; i++) {
        int minimum = inputs[i];
        int minimumIndex = i;

        for(int j=i+1; j<count; j++){
            if(minimum > inputs[j]) {
                minimum = inputs[j];
                minimumIndex = j;
            }
        }
        //swap
        inputs[minimumIndex] = inputs[i];
        inputs[i] = minimum;
        cout << inputs[i] <<'\n';
    }
}


//퀵정렬
// partion이 1이 될 때 까지 진행한다 => for
// array만큼 진행한다 => array
// left와 right가 교차되기 전까지 진행한다 => while v
// 둘다 조건에 부합하면 swap한다 => if

// left는 오른쪽으로 진행한다.
// right는 왼쪽으로 진행한다.

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

void printArray(int* arr, int count) {
    for (int i=0; i<count; i++)
        cout << arr[i] << '\n';
}




//int main() {
//    int count;
//    cin >> count;
//    int* inputs = new int[count];
//    for(int i = 0; i<count; i++){
//        cin >> inputs[i];
//    }
//
//    cout << "-----" << endl;
//    
//    
//    //selectionSort(count, inputs);
//    quickSort(0, count-1, inputs);
//    printArray(inputs, count);
//    
//    return 0;
//}
