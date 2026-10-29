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
            int val = this->data;

            if(this->next != NULL){
                delete next;
                next = NULL;
            }

            cout << "Memory has been freed for Node: " << val << endl;
        }

};

// void insertAtHead(Node* &head,Node* &tail, int d){
//     Node* temp = new Node(d);
//     if (head == NULL){
//         head = temp;
//         tail = temp;
//         temp->next = temp;
//     }

//     else{
//         temp->next = head;
//         tail->next= temp;
//         head = temp;
//     }

// }


// void insertAtTail(Node* &head,Node* &tail, int d){
//     Node* temp = new Node(d);

//     if(head == NULL){
//         head = temp;
//         tail = temp;
//         temp->next = temp;
//     }

//     else{
//         tail->next = temp;
//         temp->next = head;
//         tail = temp;
//     }


// }

// void insertAtPosition(Node* &head,Node* &tail,int position, int d){

//     if(position == 1){
//         insertAtHead(head, tail, d);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if(temp->next == head){
//         insertAtTail(head, tail, d);
//         return;
//     }

//     Node* nodetoinsert = new Node(d);

//     nodetoinsert->next = temp->next;
//     temp->next = nodetoinsert;
    
// }

void insertWithValue(Node* &tail, int element, int d){
    Node* newNode = new Node(d);
    if(tail == NULL){
        tail = newNode;
        newNode->next = newNode;
    }
    

    else{
        Node* current = tail;

        while (current->data != element)
        {
            current = current->next;
        }
        
        newNode->next = current->next;
        current->next = newNode;
        
    }
    

}

void deleteNode(Node* &tail, int val){
    if(tail == NULL){
        cout << "The list is empty!" << endl;
        return;
    }


    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if(curr == prev){
            tail = NULL;
        }

        else if(curr == tail){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
        
    }


    
}


void print(Node* tail){
    if(tail == NULL){
        cout << "The list is empty!" << endl;
        return;
    } 

    Node* temp = tail;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while (temp != tail);

    cout << endl;
    
}


int main(){

    // Node* head = NULL;
    Node* tail = NULL;

    insertWithValue(tail, 2, 66);
    print(tail);

    insertWithValue(tail, 66, 44);
    print(tail);

    insertWithValue(tail, 44, 65);
    print(tail);

    insertWithValue(tail, 44, 64);
    print(tail);


    deleteNode(tail, 66);

    print(tail);

   



    return 0;
}