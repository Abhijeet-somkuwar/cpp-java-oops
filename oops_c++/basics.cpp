#include<iostream>

using namespace std;

class Hero{
private:
    int health = 70;


public:
    string power = "Healer";
    char* name;
    static int a;
    // int * arr = new int[30];
    // int * n = new int;


    //constructors:

    Hero(){
        cout << "Constructor called!!" << endl; 
        name = new char[100];
    }

    //constructors (Parameteraized):

    Hero (int health){
        this->health = health;
    }

    Hero (int health, char power){
        this->health = health;
        this->power = power;
        //this->name = name;
    }

    // copy contructor:

    Hero(Hero& temp){
        //char * ch = new char[50];
        cout<< "my copy constructor got called." << endl;
    
        this->health = temp.health;
        this-> power = temp.power;
    }

    int gethealth(){
        return health;
    }

    string getpower(){
        return power;
    }
    
    void setHealth(int h){
        health = h;
        
    }

    void setpower(string s){
        power = s;
    }
    


    ~Hero(){
        delete name; //distructor :- to free the allocated memory.
    }

};

// initialize the static variable or data member (we do this outside the class)

int Hero::a = 5;

int main(){
    char strc;
    cout << "Size of str is: " << sizeof(strc)<<"\n";
    Hero h1; //this is static memory allocation
    cout << "Size of object h1 is: " << sizeof(h1) << "\n";

    cout << "Health of hero 1: " << h1.gethealth() << endl;

    h1.setHealth(90);
    cout << "Health increased to: " << h1.gethealth() << endl;


    cout << "Power of h1 is : " << h1.getpower() << endl;

    h1.setpower("Attaker");
    cout << "New power is: " << h1.getpower() << endl;


    Dynamic memory allocation:

    Hero *h2 = new Hero;

    cout << "Getting health using Dynamically allocated object: " << (*h2).gethealth() << endl;
    cout << "Getting Power using Dynamically allocated object: " << (*h2).getpower() << endl;
                                                                                            //both works same.
    cout << "Getting health using Dynamically allocated object: " << h2->gethealth() << endl;
    cout << "Getting Power using Dynamically allocated object: " << h2->getpower() << endl;

    constructors:

    static
    Hero m(50);
    cout<< m.gethealth() << endl;               // at the time of object creation the constructor get called automaticall.
    
    //dynamically
    Hero* m1 = new Hero(95);
    cout<< m1->gethealth() << endl;
    //----------------------------------------------------

    //static
    Hero monkey(25, 'C');
    cout << monkey.gethealth() <<endl;
    cout << monkey.getpower() <<endl;


    //dynamic
    Hero* donkey = new Hero(89, 'A');

    cout << donkey->gethealth() << endl;
    cout << donkey->getpower() << endl;

    //Hero tt; ---> this will throw error because their is no default constructor available as we had created our own constructors;
    Hero tt(50, 'B'); // only this 
    Hero t1(50); //or only this will work 

    ----------------------------------------------------

    copy contructor:
    Hero S(70,'D');

    cout << "Health of s : " << S.gethealth() << endl;
    cout << "Power of s : " << S.getpower() << endl;

    Hero R(S); //-----> Default copy contructor is there 
               // but now we had defined our own copy constructor so the default one will die and only our will work

    cout << "----------------" << endl;
    
    cout << "Health of R : " << R.gethealth() << endl;
    cout << "Power of R : " << R.getpower() << endl;

    cout << "----------------" << endl;

    S.name[0] = 'd';

    static keywword: wwe can acsses the data member of a class without using object.
    cout<< Hero::a << endl;


    
    return 0;
}