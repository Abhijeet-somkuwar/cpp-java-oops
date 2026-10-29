#include<iostream>

using namespace  std;
// this is encapsulation : data hiding or hiding data member(full encapulation).
class Student{
    private:
        int age = 50;
        int rollNo = 120;

    public:
        Student(int age, int rollNo){
            this->age = age;
            this->rollNo = rollNo;
        }
        int getAge(){
            return this->age;       // here we have only used getter
        }

        int getRoll(){
            return this->rollNo;
        }




};

int main(){
    Student *a1 = new Student(12, 33);
    cout << a1->getAge() << endl;
    cout << a1->getRoll() << endl;
    
    return 0;
}
