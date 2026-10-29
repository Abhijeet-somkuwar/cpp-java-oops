#include <iostream>                  //compile time polymorphisum is also known as static polymorphisum
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int add(int a, int b){
    int sum = a + b;
    return sum;
    }                                  //this is function overloading

    int add(int a, int b, int c){
        int sum = a + b + c;
        return sum;
    }

    void add(){
        cout << "I am a void function named as add()" << endl;
    }

    // int add(){
    //     cout << "I am a void function named as add()" << endl;  // only by changing the- 
    //     return 1;                                               //-return type or data type of-
    // }                                                       //-function the function over-loading is not possible.    
                                                                    
    //---------------------------------------------------------------------------------------
    //operator overloading:

    void operator () (){
        cout << "Main ek bracket hu ka operator huuuu..." << endl;
    }

};

 

int main(){
    A obj1;

    cout << obj1.add(12,14) << endl;
    cout << obj1.add(12,14,4) << endl;
    obj1.add();

    obj1();
  
    return 0;
}