//
//  CircularDoubleLinkedList.cpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 25..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include "CircularDoubleLinkedList.hpp"
#include <iostream>

using namespace DoubleLinkedList;
using namespace std;

CircularDoubleLinkedList::CircularDoubleLinkedList() {
    this->head = NULL;
    this->tail = NULL;
    this->current = NULL;
}

CircularDoubleLinkedList::~CircularDoubleLinkedList() {
    cout << "CircularDoubleLinkedList is Deleted" << endl;
}

Node* CircularDoubleLinkedList::CreateNode(int newData) {
    Node* node = new Node;
    node->nextNode = NULL;
    node->prevNode = NULL;
    node->Data = newData;
    
    return node;
}



void CircularDoubleLinkedList::DestroyNode(Node* node) {
    delete node;
}


void CircularDoubleLinkedList::AppendNode(Node* node) {
    if (head == NULL) {
        head = node;
        tail = node;
    } else {
        tail->nextNode = node;
        node->prevNode = tail;
        tail = node;
    }
}


void CircularDoubleLinkedList::InsertAfter(int index, Node* newNode) {
    
}





//void InsertNewHead(DoubleLinkedList::Node* newHead);
//void RemoveNode(DoubleLinkedList::Node* remove);
//DoubleLinkedList::Node* GetNodeAt(int location);
//int GetNodeCount();
//void PrintNode();
