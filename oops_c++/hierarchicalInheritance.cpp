#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class A{
    public:
        int age = 52;

        void parent(){
            cout << "I am 'A' the parent class" << endl;
        }
};

class B : public A{
    public:

        void child1(){
            cout << "I am 'B' the child class" << endl;
        }
};

class C : public A{
    public:

        void child2(){
            cout << "I am 'c' the child class" << endl;
        }
};

int main(){

    B ch1;

    ch1.parent();
    cout<<"Parent age" << ch1.age << endl;
    ch1.child1();

    
    C ch2;

    ch2.parent();
    cout<<"Parent age" << ch2.age << endl;
    ch2.child2();
    

    return 0;
}