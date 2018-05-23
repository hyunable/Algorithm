//
//  LinkedList.hpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 9..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>


/* Node 정의 */
struct Node {
    int data;
    Node* nextNode;
};



class LinkedList
{
private:
    Node *head, *tail, *current;
public:
    LinkedList();   //생성자
    ~LinkedList();  //소멸자
    
    Node* CreateNode(int newData);
    void DestroyNode(Node* node);
    void AppendNode(Node* node);
    void InsertAfter(int index, Node* newNode);
    void InsertNewHead(Node* newHead);
    void RemoveNode(Node* remove);
    Node* GetNodeAt(int location);
    int GetNodeCount();
    void PrintNode();
    
};


#endif 
