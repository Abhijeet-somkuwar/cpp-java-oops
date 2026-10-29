#include <iostream>                  
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* previous;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->previous = NULL;
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

void print(Node* head){

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
    
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len += 1;
        temp = temp->next;
    }

    return len;
    
}

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);

    temp->next = head;           // pointed the next of nwe node to head
    head->previous = temp;       // pointed the previous of head to new node

    head = temp;         // making the new node as the head 
}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp->previous= tail;
    tail= temp;

}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next->previous = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->previous = temp; 

}

void deleteNode(Node* &head, Node* &tail, int position){ // deletion of the nodes in the linked list
    
    if(position == 1){          //this is done if we want to delete the first node of the linked list i.e. the head node 
        Node* temp = head;
        temp->next->previous=NULL;//change
        head = head->next;
        temp->next  = NULL;
        delete temp;
    }

    else{
        Node* current = head;
        Node* prev = NULL;
        int cnt= 1;
        while (cnt < position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL){
            tail=prev;
        }
        current->previous = NULL;
        prev->next = current->next;
        if (current->next != NULL) {
            current->next->previous = prev;
        }
        current->next = NULL;
        delete current;
    }

}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtTail(tail, 99);
    print(head);

    insertAtPosition(head, tail, 1, 32);
    print(head);

    // cout << getLength(head);

    deleteNode(head, tail, 3);
    print(head);

    return 0;
}
