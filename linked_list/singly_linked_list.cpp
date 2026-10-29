#include <iostream>                  
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with value: " << value << endl;
    }

};

void insertAtHead(Node* &head, int d){     //insertion at head in a singly linked list

    //create a new node
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){      //insertion at tail in a singly linked list
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    Node* temp = head;
    int cnt = 1;
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    while (cnt < position-1)
    {
        temp = temp->next;  //traversing in the linkedlist till we reach the desired position
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodetoinsert = new Node(d); //created a new node to insert
    nodetoinsert->next = temp->next;  
    temp->next = nodetoinsert;  

}

void deleteNode(Node* &head, Node* &tail, int position){ // deletion of the nodes in the linked list
    
    if(position == 1){          //this is done if we want to delete the first node of the linked list i.e. the head node 
        Node* temp = head;
        head = head->next;
        temp->next  = NULL;
        delete temp;
    }

    else{
        Node* current = head;
        Node* previous = NULL;
        int cnt= 1;
        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL){
            tail=previous;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }

}

void print(Node* &head){                              //how to traverse a linkedlist
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    //creadted a node
    Node *n1 = new Node(10);

    // pointed the head to n1 i.e. the created node
    Node* head = n1;
    //pointing to the tail of the node as there is only one single node:
    Node* tail = n1;
    //print(head);

    // insertAtHead(head, 11);
    // insertAtHead(head, 12);
    // insertAtHead(head, 13);
    // insertAtHead(head, 14);
    // insertAtHead(head, 151);
    print(head);

   

    insertAtTail(tail, 11);
    print(head);
  

    insertAtTail(tail, 12);
    print(head);
  

    insertAtTail(tail, 13);
    print(head);
  
    insertAtTail(tail, 14);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head,tail, 2, 11);
    print(head);
    return 0;
}