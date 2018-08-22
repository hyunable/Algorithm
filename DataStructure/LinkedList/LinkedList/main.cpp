//
//  main.cpp
//  LinkedList
//
//  Created by Hyunah on 2018. 5. 9..
//  Copyright © 2018년 hyunable. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "LinkedList.hpp"
#include "CircularDoubleLinkedList.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    LinkedList List;
    
    //node create & append
    for (int i = 0; i < 5; i++) {
        Node* node = List.CreateNode(i);
        List.AppendNode(node);
    }
   
    List.PrintNode();
    
    //remove
    Node* findedNode = List.GetNodeAt(2);
    List.RemoveNode(findedNode);
    List.PrintNode();
    
    //insert
    Node* newNode = List.CreateNode(2);
    List.InsertAfter(1,newNode);
    List.PrintNode();
    
    //insert newHead
    Node* newHead = List.CreateNode(-1);
    List.InsertNewHead(newHead);
    List.PrintNode();
    
    //counter
    int num = List.GetNodeCount();
    cout << "\n*count:" << num << endl;
    
    
    
    //CircularDoubleLinkedList
    CircularDoubleLinkedList circular;
    
    for (int i=0; i < 6; i++) {
        DoubleLinkedList::Node* newNode = circular.CreateNode(i);
        circular.AppendNode(newNode);
    }
    
    circular.PrintNode();
    
    
}
