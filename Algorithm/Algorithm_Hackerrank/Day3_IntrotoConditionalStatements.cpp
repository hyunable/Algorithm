//
//  Day3_IntrotoConditionalStatements.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 29..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <cmath>
#include <iostream>


using namespace std;

string printResult(int N){
    if(N % 2 == 0){
        if ( 2 <= N && N < 5)
            return "Not Weird";
        else if( 6 <= N && N < 20)
            return "Weird";
        else if( N > 20)
            return "Not Weird";
    }
    return "Weird";
}



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << printResult(N) << endl;

    return 0;
}
