#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert at the beginning of the Linked List
void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Function to insert at the end of the Linked list

void insertAtTail(Node*& tail, int b){
    Node* temp = new Node(b);
    tail->next = temp;
    tail = temp;
}

// Function to print the Linked List
void print_LL(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Created a new node
    Node* node1 = new Node(50);

    // Pointed head to node1
    Node* head = node1;
    //initally tail will be at head
    Node* tail = node1;

    print_LL(head);

    // insertAtHead(head, 15);
    // print_LL(head);

    // insertAtHead(head, 25);
    // print_LL(head);

    insertAtTail(tail, 10);
    print_LL(head);

    insertAtTail(tail, 20);
    print_LL(head);

    return 0;
}
