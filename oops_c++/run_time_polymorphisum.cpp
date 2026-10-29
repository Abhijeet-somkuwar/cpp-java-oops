#include <iostream>                  //Run time polymorphisum is also known as dynamic polymorphisum
#include<bits/stdc++.h>
using namespace std;
// rules of method overriding

// • The method of the parent class and the method of the child class must have the same name.
// • The method of the parent class and the method of the child class must have the same parameters.
// • It is possible through inheritance only.

class Animal{
    public:
        void speak(){

            cout << "I can speak" << endl;
        }

};
                                    //This is Method or function overriding
class Dog : public Animal{
    public:
    void speak(){

        cout << "I can only bark" << endl;
    }

};

int main(){
    Dog obj1;
    Animal obj2;

    obj1.speak();
    obj2.speak();
    return 0;
}