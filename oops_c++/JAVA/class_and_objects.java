import java.util.*;
class Employee{

    public  int employeeSalary;
    public String employeeName;
    
    public void setName(String name){
        this.employeeName = name;
    }

    public void setSalary(int salary){
        this.employeeSalary = salary;
    }

    public int getSalary(){
        return employeeSalary;
    }

    public String getName(){
        return  employeeName;
    }

    public  int getSalary(int amount){     // this is function or method over loading.
        employeeSalary += amount;
        System.out.println("here we had added some amount to salary"+ employeeSalary);
        return 0;
    }

    Employee(String nam,int j) {      //parameterized constructor
        this.employeeName = nam;
        this.employeeSalary = j;
    }

    Employee(String name) {
        this.employeeName = name;
    }                               
                                     // this is constructor over loading using same named constructor in same class but will takes different type of inputs           
    Employee(int sal) {
        this.employeeSalary = sal;
    }

    
    // copy constructor

    Employee(Employee info){
        this.employeeName = info.getName();
        // or this.employeeName = info.employeeName;

        this.employeeSalary = info.getSalary();
        // or this.employeeSalary = info.employeeSalary;
    }
    
    
 
}

class  Main{ 
       public static void main(String[] args) {
        Employee obj1 = new Employee("abhi", 99);

        // obj1.setName("abhijeet");  // setting values where there was default or no constructor present
        // obj1.setSalary(1200000);

        System.out.println(obj1.getName());
        System.out.println(obj1.getSalary());  

        // obj2.setName("rahul");
        // obj2.setSalary(92929292);
        Employee obj2 = new Employee("ram", 99);
        // obj2.employeeName = "mango";
        System.out.println("obj2 name: "+obj2.getName());
        System.out.println("obj2 salary: "+obj2.getSalary());

        // Employee object_with_salary = new Employee(500000);
        // System.err.println(object_with_salary.employeeSalary);

        // Employee object_with_name =  new Employee("Sugar");
        // System.out.println(object_with_name.employeeName);

        // object_with_salary.getSalary(600);

        Employee newEmp = new Employee(obj2);

        System.out.println("newEmp i.e copied object by copy constructors name: " + newEmp.employeeName);
        System.out.println("newEmp i.e copied object by copy constructors Salary: " + newEmp.employeeSalary);

    }
    
}
