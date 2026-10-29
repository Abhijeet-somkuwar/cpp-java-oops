#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Human{  // Parent class
    protected:
    int height;
 
    public:
   
    
    int weight;
    int age;
    void eat(){
        cout << "I can Eat " << endl;
    }

   

};

class Male : public Human{  //child class
    
    public:
    char colour;

    void setAge(int a){
        this->age = a;
    }

    int getHeight(){
        return this->height;
    }
    
};

int main(){
    Male obj1;
    cout <<"age before: " << obj1.age << endl;
    cout << obj1.getHeight() << endl;
    cout << obj1.weight << endl;

    obj1.eat();

    cout <<"age after: " << obj1.age << endl;



    return 0;
}