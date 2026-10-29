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

            cout << "Memory has been freed for Node with value: " << val << endl;
        }

};

void insertWithElement(Node* &tail,int ele, int d){
    Node* temp = new Node(d);
    if(tail == NULL){
        tail = temp;
        temp->next = temp;
    }

    else{
        Node* temp2 = tail;
        while (temp2->data != ele)
        {
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;

    }

}

void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout << "List is empty!!" << endl;
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);

    cout << endl;
    

}

void deleteNode(){


}
int main(){
    Node* tail = NULL;
    insertWithElement(tail, 2, 54);
    print(tail);

    insertWithElement(tail, 54, 5);
    print(tail);

    insertWithElement(tail, 5, 9);
    print(tail);

    insertWithElement(tail, 9, 77);
    print(tail);
    

    return 0;
}