//
//  CircularDoubleLinkedList.hpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#ifndef CircularDoubleLinkedList_hpp
#define CircularDoubleLinkedList_hpp

#include <stdio.h>


namespace DoubleLinkedList {
    struct Node {
        int Data;
        Node *nextNode, *prevNode;
    };
}


class CircularDoubleLinkedList
{
private:
    DoubleLinkedList::Node *head, *tail, *current;
public:
    CircularDoubleLinkedList();   //생성자
    ~CircularDoubleLinkedList();  //소멸자
    
    DoubleLinkedList::Node* CreateNode(int newData);
    void DestroyNode(DoubleLinkedList::Node* node);
    void AppendNode(DoubleLinkedList::Node* node);
    void InsertAfter(int index, DoubleLinkedList::Node* newNode);
    void InsertNewHead(DoubleLinkedList::Node* newHead);
    void RemoveNode(DoubleLinkedList::Node* remove);
    DoubleLinkedList::Node* GetNodeAt(int location);
    int GetNodeCount();
    void PrintNode();
    
};





#endif /* CircularDoubleLinkedList_hpp */
