//
//  L8_EquiLeader.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 26..
//  Copyright © 2018년 hyunable. All rights reserved.
//

/*
 Solution
 - 44% : 조건처리를 잘못해줌 => 앞뒤가 equi leader 인가 검사하는부분을 leader인가를 검사하는 if문 안에 중첩해서
         다른수가 slice되었을 때, count가 안됬다.
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solution8_2(vector<int> &A) {
    unordered_map<int, int> m;
    
    int equiLeader = 0;
    int count = 0;
    
    //find leader
    for(auto &n : A){
        m[n] += 1;
        if( m[n] > (int)A.size() /2 ){
            equiLeader = n;
        }
    }
    
    int j = 1;  //현재 인덱스까지의 element 갯수
    int leaderSum = 0;
    cout << "leader total" << m[equiLeader] << endl;
    for(auto &n : A) {
        if (n == equiLeader)
            leaderSum += 1;
        if (leaderSum > j/2 && (m[equiLeader] - leaderSum) > ((int)A.size() - j)/2 ) {
            count += 1;
        }
        j++;
    }
    return count;
}

//int main () {
//    vector<int> v1 = {4, 4, 2, 5, 3, 4, 4, 4};
//    solution8_2(v1);
//    return 0;
//}
