//Encapsulation

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;  // Private data member for name
    int age;      // Private data member for age

public:
    // Setter method for name
    void setName(string n) {
        name = n; // Assign the value of n to the private member name
    }

    // Setter method for age
    void setAge(int a) {
        age = a; // Assign the value of a to the private member age
    }

    // Getter method for name
    string getName() {
        return name; // Return the value of the private member name
    }

    // Getter method for age
    int getAge() {
        return age; // Return the value of the private member age
    }
};

int main() {
    Person p;          // Create an object of Person class
    p.setName("John"); // Set the name using the setter method
    p.setAge(30);      // Set the age using the setter method
    
    // Output the name and age using the getter methods
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    
    return 0;
}

//--------------------------------------------------------------------------------------------------------------

//Abstraction

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function providing interface framework
    virtual void draw() = 0;
};

// Derived class for Circle
class Circle : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape *s1 = new Circle();    // Create an object of Circle and assign to Shape pointer
    Shape *s2 = new Rectangle(); // Create an object of Rectangle and assign to Shape pointer
    
    s1->draw(); // Call the draw method of Circle
    s2->draw(); // Call the draw method of Rectangle
    
    delete s1; // Free allocated memory for Circle object
    delete s2; // Free allocated memory for Rectangle object
    
    return 0;
}


//------------------------------------------------------------------------------------------------------------

//Inheritance

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

int main() {
    Dog d;  // Create an object of Dog class
    d.eat();  // Call the inherited method from Animal class
    d.bark(); // Call the specific method of Dog class
    
    return 0;
}

//--------------------------------------------------------------------------------------------------------------

//Polymorphism

#include <iostream>
using namespace std;

class Print {
public:
    // Overloaded function for integer
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    
    // Overloaded function for double
    void display(double f) {
        cout << "Float: " << f << endl;
    }
    
    // Overloaded function for string
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;         // Create an object of Print class
    p.display(5);    // Call display function with an integer
    p.display(5.5);  // Call display function with a double
    p.display("Hello"); // Call display function with a string
    
    return 0;
}

