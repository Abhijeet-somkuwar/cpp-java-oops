#include <iostream>                  
#include<bits/stdc++.h>
using namespace std;

//implementation hiding

class A{
    private:
        int a,b;
    public:
        void set_a_b(int x, int y){
            this->a = x;                     // here we have used both getter and setter
            this->b = y;
        }

        int get_a(){
            return a;
        }
        int get_b(){
            return b;
        }


};


int main(){
    A *o = new A;

    o->set_a_b(12, 15);

    cout<< o->get_a() << "," << o->get_b() << endl;


    return 0;
}