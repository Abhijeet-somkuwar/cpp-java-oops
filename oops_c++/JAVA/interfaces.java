import  java.util.*;


interface Carinterface{

    public static final int doors = 4;   // we can access this variable in any of the class where we had implemented this interface but cant increment / derecment it.
    public void engin();
    public void colour();

    //default and static
    default void tyers(){
        System.out.println("Car have four tyers");
    }

    static void print(){
        System.out.println("something");
    }
}

interface Airbags{
    public void Airbags();
}

class Bmw implements Carinterface,Airbags{           // we can assign one or many contracts/interface to a class. 
    public  void Airbags(){
        System.err.println("This car have airbags");
    }
   public  void  engin(){
        System.out.println("It has 6 liters petrol engin");
    }
    public void colour(){
        System.out.println("Comes in many colours");
    }

    @Override        // we can also override the static method
    public void tyers(){
        System.out.println("This car have 4 broad tyers");
    }

    public void print(){                 //static method can be overrided
        System.out.println("Something2");
        Carinterface.print();           // we can also call the static method of the parent class
    }

}

class Ferarri implements Carinterface{
   public  void  engin(){
        System.out.println("It has 7 liters petrol engin");
    }
    public void colour(){
        System.out.println("Comes mainly in red colour");
    }

    @Override
    public void tyers(){
        System.out.println("This car have 4 sports tyers");
    }


    public void tyers(int age){
        if(age < 18){
            System.out.println("You cannot see the tyers");
        }else{
            System.out.println("This car have 4 sports tyers");

        }
    }
}


class Interface{

    public static void main(String[] arg){
        // Ferarri sp3 = new Ferarri();

        // sp3.colour();
        // sp3.engin();
        // sp3.tyers();

        Bmw m4 = new Bmw();

        m4.colour();
        m4.engin();
        m4.tyers();
        m4.Airbags();
        // m4.print();
        System.out.println(m4.doors);  //we can access the variables in the interface but cant modify it

        // Ferarri random = new Ferarri();

        // random.tyers();
        // random.tyers(5); // overridden method is overloaded




    }
}