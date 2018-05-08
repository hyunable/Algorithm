//
//  LinkedList.hpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 9..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

/* Node 정의 */
typedef struct Node {
    DataType data;
    struct Node* nextNode;
}Node;


/* 함수 원형만 선언 */

Node* CreateNode(DataType newData);
void DestroyNode(Node* node);
void AppendNode(Node** head, Node* node);
void InsertAfter(Node** current, Node* node);
void InsertNewHead(Node** head, Node* newHead);
void RemoveNode(Node** head, Node* remove);
Node* GetNodeAt(Node* head, int location);
int GetNodeCount(Node* head);


#endif 
