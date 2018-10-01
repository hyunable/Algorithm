//
//  Jumping on the Clouds.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 30..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <vector>
using namespace std;

int jumpPosition(int p, vector<int> m){
    int position = p;
    if(m[p+2] != 1 && p+2 < m.size()) {
        position += 2;
    } else {
        position += 1;
    }
    return jumpPosition(position );
}

int jumpingOnClouds(vector<int> c) {
    int result = 0;
    int lengh = (int)c.size();
    for(int i =0; i < lengh; i++){

    }
    return result;
}
