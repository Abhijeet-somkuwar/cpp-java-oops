#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Mother{  // Parent class
    public:
    int m_age= 55;
    void mother(){
        cout << "I am mother " << endl;
    }

   

};

class Father {  //parent class
    
    public:
    int f_age= 69;
    public:
    void father(){
        cout << "I am father " << endl;
    }
    
};

class Child : public Mother ,public Father{
    public:
    int c_age = 22;

    int setFage(int age){
       return this->f_age = age;
    }
    int getFage(){
        return f_age;
    }

    int setMage(int age){
        return this->m_age = age;
     }
     int getMage(){
        return m_age;
    }

     void child(){
        cout << "I am child" << endl;
     }
};

int main(){
   
    Child c1;

    c1.mother();
    c1.father();
    c1.child();

    c1.setFage(52);
    c1.setMage(41);

    cout <<"Fathers age is: "<< c1.getFage() << endl;
    cout <<"Mothers age is: "<< c1.getMage() << endl;
    


    return 0;
}