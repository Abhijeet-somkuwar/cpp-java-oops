#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Father{
    public:
        string F_color = "white";
        string F_height = "Tall";
    
    public:
        void Parentsage(){

            cout << "Fathers age is 52" << endl;
        }

};

class Mother{
    public:
        string M_color = "white";
        string M_height = "Short";
    
    public:
        void Parentsage(){  // function with same name 

            cout << "Mothers age is 49" << endl;
        }

};

class Child : public Father, public Mother{
    public:
        int age = 18;
};

int main(){

    Child obj;

    obj.Father ::Parentsage();  // both are called using scope resolution as the user wanted
    obj.Mother ::Parentsage();
    
    return 0;
}