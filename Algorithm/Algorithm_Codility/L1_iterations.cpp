//
//  L1_iterations.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 22..
//  Copyright © 2018년 hyunable. All rights reserved.
//


/*
 problem
 A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
 
 : 십진수를 이진수로 변환 후 binary gap (1과 1사이의 0의 갯수가 가장 많은 갯수) 를 리턴한다.
 */

/*
 solved
 input의 범위를 반드시 확인할것, overflow가 나지 않도록!! [1...2,147,483,647]
 
 */

#include <iostream>

using namespace std;

int binaryToDecimal(int num) {
    int result = 0;
    
    for (int i=1; num > 0; i*=2) {
        int demical = num % 10;
        result += demical*i;
        num /= 10;
    }
    return result;
}

long decimalToBinary(int num) {
    long result = 0;

    for (long i=1; num > 0 ; i*=10) {
        int binary = num % 2;
        result += binary*i;
        num /= 2;
        cout << "num: " << result << endl;
    }
    cout << "binary: " << result << endl;
    return result;
}

//codility part
int solution1(int N) {
    long binary = decimalToBinary(N);
    int largestGap = 0;
    
    int oneIndex = 0;
    
    for (int i=1; binary > 0; i++) {
        if (binary % 10 == 1) {
            if (oneIndex >0) {
                int gap = abs(oneIndex - i);
                if (gap > largestGap) {
                    largestGap = gap;
                }
            }
            oneIndex = i;
        }
        
        binary /= 10;
    }
    
    if (largestGap > 0) {
        largestGap -= 1;
    }
    return largestGap;
    
}


//int main() {
//    int gap = solution(805306373);
//    cout << "gap: " << gap << endl;
//    
//    return 0;
//}
