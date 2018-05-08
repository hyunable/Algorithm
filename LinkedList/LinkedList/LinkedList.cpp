//
//  LinkedList.cpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 9..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include "LinkedList.hpp"

class LinkedList {
    Node* current;
    Node* head;
    Node* tail;
    
    LinkedList();
    ~LinkedList();
    
    Node* CreateNode(DataType newData);
    void DestroyNode(Node* node);
    void AppendNode(Node** head, Node* node);
    void InsertAfter(Node** current, Node* newNode);
    void InsertNewHead(Node** head, Node* newHead);
    void RemoveNode(Node** head, Node* remove);
    Node* GetNodeAt(Node* head, int locatsion);
    int GetNodeCount(Node* head);
};

/* node initiallizer */
Node* LinkedList::CreateNode(DataType newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->nextNode = NULL;
    
    return newNode; // 노드의 주소를 반환한다.
}


/* 노드 소멸 */
void LinkedList::DestroyNode(Node* node) {
    delete node;
}


void LinkedList::AppendNode(Node** head, Node* newNode) {
    /* 헤드 노드가 Null일 경우 */
    if ((*head) == NULL) {
        *head = newNode;   //헤드가 노드를 가리키게한다.
    } else {
        /* tail을 찾아 node를 연결한다 */
        Node* Tail = (*head);
        while (Tail->nextNode != NULL) {
            Tail = Tail->nextNode;   //다음칸으로 계속 검색해 나간다.
        }
        // 마지막에 도달하면 새 노드를 추가한다.
        Tail->nextNode = newNode;
    }
}


/* 특정 위치 다음에 node 추가 */
void LinkedList::InsertAfter(Node* current, Node* newNode) {
    // 삽입된 노드가 원래 다음 노드를 가리키게 하고 이전 노드가 삽입된 노드를 가리키게 해야지만 삽입이 가능하다.
    newNode->nextNode = current->nextNode;
    current->nextNode = newNode;
}


void LinkedList::InsertNewHead(Node** head, Node* newHead) {
    if (*head == NULL) {    //head가 없을 경우 (첫 노드일 경우)
        *head = newHead;
    } else {
        newHead->nextNode = *head;
        *head = newHead;
    }
}


void LinkedList::RemoveNode(Node** head, Node* remove) {
    while (*head != remove) {
        *head = (*head)->nextNode;
    }
    
    
    
}

Node* LinkedList::GetNodeAt(Node* head, int location);
int LinkedList::GetNodeCount(Node* head);
