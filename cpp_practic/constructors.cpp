#include <iostream>
#include <string>

using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    int age;
    //------------------------------
    // non-parameterized constructor

    // Teacher(){
    //     dept = "Computer Science";
    // } 
    //-------------------------------

    Teacher(string name, string dept, int age, double salary){  // it is a paramaterized constructor
       this->name= name;       // left side shows the object's name = right side shows the constructor's parameter
       this->dept= dept ;       // left side shows the object's dept = right side shows the constructor's parameter
       this->age= age;          // left side shows the object's age = right side shows the constructor's parameter
       this->salary =  salary;  // left side shows the object's salary = right side shows the constructor's parameter
    } 

    Teacher(Teacher &OrgOb){  // it is a copy constructor
       this->name= OrgOb.name;       // left side shows the object's name = right side shows the constructor's parameter
       this->dept= OrgOb.dept ;       // left side shows the object's dept = right side shows the constructor's parameter
       this->age= OrgOb.age;          // left side shows the object's age = right side shows the constructor's parameter
       this->salary =  OrgOb.salary;  // left side shows the object's salary = right side shows the constructor's parameter
    } 

    void getInfo(){
        cout<< "name :"<<name<<endl;
        cout<< "department :"<<dept<<endl;
        cout<< "age :"<<age<<endl;
        cout<< "salary :"<<salary<<endl;
    }
};

int main(){
    Teacher t1("Abhijeet somkuwar", "CSE", 22, 50000);
    // t1.getInfo();

    Teacher t2(t1); // this is a copy constructor ( here default copy constructor gets invoked or called)
    t2.getInfo();


    return 0;
}