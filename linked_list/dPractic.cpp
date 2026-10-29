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
            this->previous = NULL;
            this->next = NULL;
        }

        ~Node(){
            int val = this->data;

            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }

            cout << "memory has been freed for node with value " << val << endl; 
        }

};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp->next = head;
    head->previous = temp;
    head = temp;
}

void insertAttail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}


void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    int cnt = 1;
    Node* temp = head;

    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAttail(tail, data);
        return;
    }
    
    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    nodeToInsert->previous = temp;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;


}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        Node* temp = head;
        temp->next->previous=NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }

        if(current->next == NULL){
            tail = prev;
        }
        current->previous = NULL;
        prev->next = current->next;
        if(current->next != NULL){
            current->next->previous = prev;
        }
        current->next = NULL;
        delete current;


    }

}

void print(Node* head){

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}


int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);

    insertAttail(tail, 54);
    print(head);

    insertAtPosition(head, tail, 3, 69);
    print(head);

    deleteNode(head, tail, 3);
    print(head);



    return 0;
}