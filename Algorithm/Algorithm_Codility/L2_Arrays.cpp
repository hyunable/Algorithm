//
//  L2_Arrays.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 23..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 An array A consisting of N integers is given. Rotation of the array means that each element is shifted right by one index, and the last element of the array is moved to the first place. For example, the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7]
 
 task : The goal is to rotate array A K times; that is, each element of A will be shifted to the right K times.
 
 range : N and K are integers within the range [0..100];
        each element of array A is an integer within the range [−1,000..1,000].
 
 A는 N 개의 정수와 정수 K로 구성되며 배열 A를 K 번 회전 한 값을 반환합니다.
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
 각 인덱스를 추출하고 해당 인덱스에 K만큼 더한 뒤 size만큼 나눠준다 => 재배치된 인덱스 추출
 by. 가마도로
 */

vector<int> solution2_1(vector<int> &A, int K) {
    vector<int>::iterator at;   //이터레이터 (index)
    vector<int>::size_type sizeOfA = A.size();
    vector<int> _A(A.size());  //벡터복사
    
    int i = 0;
    for (at = A.begin() ; at < A.end(); at++,i++) {
        int value = *at;
        int move = (i+K) % sizeOfA;
        _A.at(move) = value;
    }
    return _A;
}




/*
 solution:
 empty array 일 때, 예외 처리를 안해줌
 by. 오도로
 */
vector<int> solution2_2(vector<int> &A, int K) {
    vector<int> _A;
    
    int move = A.size() != 0 ? K % (A.size()) : 0;
    
    vector<int> subBack(&A[A.size()]-move,&A[A.size()]);
    vector<int> subFront(&A[0],&A[A.size()]-move);

    _A.insert(_A.begin(),subFront.begin(),subFront.end());
    _A.insert(_A.begin(), subBack.begin(), subBack.end());
    
    return _A;
}





//int main() {
//    //vector<int> v1 = {3, 8, 9, 7, 6};
//    vector<int> v1 = {};
//    
//    //* Solution
//    vector<int> v = solution2(v1, 3);
//    
//    
//    // 출력
//    for (int i = 0; i < v.size(); ++i)
//        cout << v[i] << " ";
//    
//    cout << endl;
//
//    return 0;
//}
