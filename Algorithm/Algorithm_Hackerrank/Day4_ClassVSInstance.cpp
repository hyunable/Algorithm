//
//  Day4_ClassVSInstance.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 29..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
using namespace std;

class Person{
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge){
    // Add some more code to run some checks on initialAge
    
}

void Person::amIOld(){
    Person::age ++;
}

void Person::yearPasses(){
    // Increment the age of the person in here
    
}

int main(){
    int t;
    int age;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();
        
        cout << '\n';
    }
    
    return 0;
}
