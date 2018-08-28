//
//  L7_Brackets.cpp
//  Algorithm
//
//  Created by Hyunah on 2018. 8. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//
/*
 Task
 - S is empty;
 - S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string;
 - S has the form "VW" where V and W are properly nested strings.
 
 - Range : N = [0..200,000]
 - Goal :
    N is an integer within the range [0..200,000];
    string S consists only of the following characters: "(", "{", "[", "]", "}" and/or ")".
 - Return :
 */

/*
 Solution
 1. 88% => Top이 없을때 처리를 안해줌. default 로 처리
 */

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int solution(string &S) {
    stack<char> st;
    
    for (char &c : S) {
        if('{' == c || '[' == c || '(' == c) {
            st.push(c);
        }
        if ( '}'  == c|| ']' == c || ')'  == c) {
            switch (st.top()) {
                case '{':
                    if ('}' == c){
                        st.pop();
                        break;
                    } else
                        return 0;
                case '[':
                    if (']' == c){
                        st.pop();
                        break;
                    } else
                        return 0;
                    
                case '(':
                    if (')' == c){
                        st.pop();
                        break;
                    } else
                        return 0;
                default:
                    return 0;
            }
        }
        
    }
    return st.empty() ? 1 : 0;
}



/*
 현식 방식
 */
int solution2(string &str) {
    stack<char> s;
    const string opening("({["), closing(")}]");
    for(int i=0; i<str.length();i++){
        if(opening.find(str[i])!=-1)
            s.push(str[i]);
        else{
            if(s.empty()) return 0;
            if(opening.find(s.top())!= closing.find(str[i])) return 0;
            s.pop();
        }
    }
    return s.empty() ? 0 : 1;
}

