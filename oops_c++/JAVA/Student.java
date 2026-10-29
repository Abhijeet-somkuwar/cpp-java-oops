import  java.util.*;

class Passport{
    private int passNo;

    public Passport(int passNo) {
        this.passNo = passNo;
    }

    public int getpassportno(){
        return  passNo;
    }
    
}

public class Student {

    private String name;
    private Passport passNo;

    public Student(String name, int passNumber) {
        this.name = name;
        this.passNo = new Passport(passNumber);
    }

    public void getdata(){
        System.out.println("Student name: "+ name + " " + "student passport number: "+ passNo.getpassportno());
    }
    
}

class Main4{

    public static void main(String[] args){
        Student obj = new Student("abhi", 123263);

        obj.getdata();

    }
}