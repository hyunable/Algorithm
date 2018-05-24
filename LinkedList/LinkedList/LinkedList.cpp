//
//  LinkedList.cpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 9..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include "LinkedList.hpp"
#include <iostream>

using namespace std;

/* Constructor */
LinkedList::LinkedList() {
    this->head = NULL;
    this->tail = NULL;
    this->current = head;
}

/* Destructor */
LinkedList::~LinkedList() {
    cout << "List is Deleted!" << endl;
}


Node* LinkedList::CreateNode(int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->nextNode = NULL;
    
    return newNode; // 노드의 주소를 반환한다.
}


/* 노드 소멸 */
void LinkedList::DestroyNode(Node* node) {
    delete node;
}


void LinkedList::AppendNode(Node* newNode) {
    /* 헤드 노드가 Null일 경우 */
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        /* tail을 찾아 node를 연결한다 */
        //1. tail Node가 newNode를 가리킨다
        tail->nextNode = newNode;
        //2. tail은 마지막으로 append된 노드를 가리킨다
        tail = newNode;
    }
}


/* 특정 위치 다음에 node 추가 */
void LinkedList::InsertAfter(int index, Node* newNode) {
    
    this->GetNodeAt(index);
    // 삽입된 노드가 원래 다음 노드를 가리키게 하고 이전 노드가 삽입된 노드를 가리키게 해야지만 삽입이 가능하다.
    //1. current가 가리키고있던 노드를 newNode도 가리킨다 (데이터 유실방지)
    newNode->nextNode = current->nextNode;
    
    //2. current가 newNode를 가리킨다.
    current->nextNode = newNode;
}


void LinkedList::InsertNewHead(Node* newHead) {
    if (this->head != NULL){
        newHead->nextNode = head;
        head = newHead;
    }else {
        this->head = newHead;
    }
}


void LinkedList::RemoveNode(Node* remove) {
    if (remove == head) {
        head = head->nextNode;
        delete remove;
    } else {
        this->current = head;
        while (current->nextNode != remove && current != NULL) {
            current = current->nextNode;
        }

        current->nextNode = remove->nextNode;
        delete remove;
    }
}

Node* LinkedList::GetNodeAt(int location) {
    this->current = head;
    
    for (int i = 0; i < location; i++) {
        current = current->nextNode;
    }
    return current;
}


int LinkedList::GetNodeCount() {
    int counter = 0;
    for (Node* ptr = this->head; ptr!=NULL; ptr = ptr->nextNode) {
        counter++;
    }
    
    return counter;
}

void LinkedList::PrintNode() {
    cout << endl;
    for (Node* ptr = head; ptr != NULL; ptr = ptr->nextNode) {
        cout << "Node:" << ptr->data ;
        if (ptr->nextNode != NULL) {
            cout << "->" ;
        }
    }
}
