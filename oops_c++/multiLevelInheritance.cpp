#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Human{  // Parent class
    protected:
    int height;
 
    public:
   
    
    int weight;
    int age;
    public:
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

    void male(){
        cout << "I am male" << endl;
    }
    
};

class Female : public Male{
    public:

    void female(){
        cout << "I am female" << endl;
    }

};

int main(){
    Female f;

    f.eat();
    f.male();
    f.female();



    return 0;
}