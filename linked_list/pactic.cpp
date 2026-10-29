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
            cout << "memory is freed for node with data " << value << endl;
        }

};

void insertAtHead(Node* &head,Node* &tail, int d){
    if (head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

}

void insertAtTail(Node* &tail,Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp; 
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }

}
void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt += 1;
    }

    if (temp->next == NULL){
        insertAtTail(tail,head, d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next  = temp->next;
    temp->next = nodetoinsert;

}

void deleteNode(Node* &head,Node* &tail, int position){

    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    else{
        Node* current = head;
        Node* previous = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }

        previous->next = current->next;
        if(current->next == NULL){ // this is the logic
            tail = previous;
        }
        current->next = NULL;
        delete current;
    }
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

}


int main(){

    

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head ,tail, 1);
    print(head);

    insertAtTail(tail,head, 3);
    print(head);

    insertAtTail(tail,head, 4);
    print(head);

    insertAtTail(tail,head, 5);
    print(head);

    insertAtPosition(head, tail, 1, 33);
    print(head);

    deleteNode(head,tail, 6);
    print(head);

    // cout << "tail is : " << tail->data;


    return 0;
}