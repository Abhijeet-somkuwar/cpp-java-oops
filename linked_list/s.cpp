#include <iostream>                  
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
   
};

void print(Node* &head){
    //creating a temporary node i.e copy of head to traverse in the linkedlist as we had passed the head by reference
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp ->next;
    }
    cout << endl;

}

void insertAtHead(Node* &head, int d){
    //creating a new node using name temp

    Node* temp = new Node(d);
    temp ->next = head;  //adding address of previous node into the new one
    head = temp;         // making the new node as the head node

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);  //created a new node
    tail ->next = temp;        // storing the address of newly created node into previous one
    tail = temp;            // and as tail should be pointing towards last node so doing thst


}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    Node* temp = head; //taking a temprory node to get to our disered position
    int cnt = 1;       // initially the position will be always at 1 index i.e position of head

    if(position == 1){
        insertAtHead(head, d);  // if we try to add a node at index 1 we can directly call insertAtHead() function.
        return;
    }
    while (cnt < position-1)  //the address of our disered position for insertion will- 
    {                         //- be stored at its previous node therefore running loop till position-1.
        temp = temp->next;    //doing temp++
        cnt++;
        
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);   // if we try to add a node at index n(tail or last index) we can directly call insertAtTail() function.
        return;
    }

    Node* nodetoinsert = new Node(d);  // creating a new node

    nodetoinsert->next = temp->next;   // getting the addrerss of n+1 node from temp into our newly created node
    temp->next = nodetoinsert;         // storing the address of our newly created node into n-1 node i.e. placing everything into its disered place
    
    
}


int main(){
    //creating a node or a object using dynamic memory allocation

    Node* node1 = new Node(1);
    

    //pointing head to node1
    Node* head = node1;

    //pointing tail to node1
    Node* tail = node1;

    //printing this^ node
    print(head);

    // insertAtHead(head, 2);
    // print(head);

    insertAtTail(tail, 2);
    insertAtTail(tail, 4);
    insertAtTail(tail, 6);
    insertAtTail(tail, 8);

    print(head);

    insertAtPosition(head,tail,1,5);
    print(head);

    return 0;
}