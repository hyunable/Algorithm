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
    node->data = newData;
    
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
        tail->nextNode = head;
        head->prevNode = tail;
    }
}

Node* CircularDoubleLinkedList::GetNodeAt(int location) {
    this->current = head;
    
    for (int i = 0; i < location; i++) {
        current = current->nextNode;
    }
    return current;
}

void CircularDoubleLinkedList::InsertAfter(int index, Node* newNode) {
    Node* nodeAt = GetNodeAt(index);
    Node* nodeAtNext = nodeAt->nextNode;
    
    newNode->nextNode = nodeAtNext;
    nodeAtNext->prevNode = newNode;
    
    nodeAt->nextNode = newNode;
    newNode->prevNode = nodeAt;
}


void CircularDoubleLinkedList::InsertNewHead(Node* newHead){
    if (head == NULL) {
        this->head = newHead;
        this->tail = newHead;
    } else {
        head->prevNode = newHead;
        newHead->nextNode = head;
        
        head = newHead;
    }
}


void CircularDoubleLinkedList::RemoveNode(Node* remove) {
    if (head == remove) {
        head = remove->nextNode;
        head->prevNode = NULL;
    } else {
        current = head;
        while (current->nextNode != remove && current != NULL) {
            current = current->nextNode;
        }
        current->nextNode = remove->nextNode;
        remove->prevNode = current;
        delete remove;
    }
}


int CircularDoubleLinkedList::GetNodeCount() {
    int counter = 0;
    for (Node* ptr = this->head; ptr!=tail; ptr = ptr->nextNode) {
        counter++;
    }
    
    return counter;
}

void CircularDoubleLinkedList::PrintNode() {
    int Count = GetNodeCount();
    int i = 0;
    cout << endl;
    for (Node* ptr = head; i<Count*2; ptr = ptr->nextNode) {
        cout << "DoubleNode:" << ptr->data ;
        if (ptr->nextNode != NULL) {
            cout << "->" ;
        }
        i++;
    }
}
