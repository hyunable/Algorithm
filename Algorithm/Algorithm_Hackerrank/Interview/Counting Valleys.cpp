//
//  Counting Valleys.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 9. 30..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <string>
#include <unordered_map>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    unordered_map<char, int> m;
    
    int seaLevel = 0;
    int result = 0;
    
    for(auto &n : s){
        if(n == 'D')
            seaLevel -= 1;
        if(n == 'U')
            seaLevel += 1;
        if(seaLevel == 0 && n == 'U')
            result += 1;
    }
    return result-1;
}
