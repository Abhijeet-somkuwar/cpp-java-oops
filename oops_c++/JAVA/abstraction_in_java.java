import  java.util.*;

abstract class Car{
    abstract public void carDetails();
     public void features(){
        System.out.println("Car have four wheels..");
        System.out.println("Car have one stearing wheel..");
        System.out.println("Car have four tyers..");
        System.out.println("Car have one Engin..");
    }
} 

class Mercedec extends Car{
    public void carDetails(){
        System.out.println("Car name is mercedes..");
        System.out.println("It is luxary and sports car..");
    }
}

class Bmw extends Car{
    public void carDetails(){
        System.out.println("Car name is Bmw..");
        System.out.println("It is sports car..");
    }
}
// in java we can achive abstraction using class or interface


interface CarPrice{
    public void price();

    //default and static

    default void tax(){
        System.out.println("cars will have 18% tax on them.");
    }

    static void gst(){
        System.out.println("There will be 6% gst on cars.");
    }
}

class Honda implements CarPrice{
    public  void price(){
        System.out.println("The price of Honda cars starts from 2-lakhs to 2 crore");
    }

    public void carDetails(){
        System.out.println("Car name is Honda..");
        System.out.println("It is normal car..");
    }
}



 class compile{

    public static void main(String[] args){
        Car obj1 = new Mercedec();
        obj1.features();
        obj1.carDetails();

        System.out.println("");    

        Car obj2 = new Bmw();
        obj2.features();
        obj2.carDetails();

        Honda obj3 = new Honda();

        obj3.carDetails();
        obj3.price();
        obj3.tax();
        CarPrice.gst();
    }
}