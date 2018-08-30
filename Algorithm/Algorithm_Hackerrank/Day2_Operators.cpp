//
//  Day2_Operators.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 29..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double result = meal_cost * (((tip_percent + tax_percent) * 0.01)+1);
    printf("The total meal cost is %d dollars.", (int)floor(result + 0.5));
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    solve(meal_cost, tip_percent, tax_percent);
    
    return 0;
}
