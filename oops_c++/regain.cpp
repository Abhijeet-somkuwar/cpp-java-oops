#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* newNode = new Node(d);
    // Node* temp = head;
    newNode->next = head;
    head = newNode;
}

void printNodes(Node* & head){
    Node* temp = head;

    while( temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"Null";
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    printNodes(head);

    return 0;
}



















//--------------------------------------------------------------------------------------------------
// class Hero{
//     public:
//         int salary;
//         string desig = "";
    
//     Hero(int salary, string desig){
//         this->salary = salary;
//         this->desig = desig;
//     }

//     Hero(Hero &temp){
//         this->salary = temp.salary;
//         this->desig = temp.desig;
//     }

//     void getDetails(){
//         cout << "Salary : " << this->salary << endl;
//         cout << "Designation : " << this->desig << endl;
//     }



// };

// int main(){

//     Hero monkey(1200000, "SDE");
//     monkey.getDetails();

//     Hero* donkey = new Hero(monkey);
//     donkey->getDetails();


//     return 0; 
// }