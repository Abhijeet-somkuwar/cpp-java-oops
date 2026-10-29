
import java.lang.classfile.attribute.InnerClassInfo;


class OuterClass{
    public  int count = 67;
    static  String name = "Abhijeet";

    // static class InnerClass{   // this is a static inner class
    //     public void inner(){
    //         System.out.println("Inner Class is called " + name); // static inner class can only access the static varaiable of the outer class
    //     }
    // }

    // public  void outer(){
    //     InnerClass obj2 = new InnerClass(); // created an object of inner class to access the inner class methord by calling the methord of outer class
    //     obj2.inner();
    // }
    //-----------------------------------------------------------------------------------------------------
    // this is a non static inner class
    //  class  InnerClass{

    //     public void execute(){
    //         System.out.println("inner class is executing " + count); // can access all of the members of the outer class
    //     }

    //  }

    //-----------------------------------------------------------------------------------------------------
    // this is a local inner class

    // public  void execute(){
    //     final int xyz =99;
    //     class InnerClass{
    //         void execute(){
    //             System.out.println("Inner class called " + xyz + " " + count + " " + name); //can access all the members of outer class and only the final member of method in which it has defined 
    //         }
    //     }
    //     InnerClass obj1 = new  InnerClass();
    //     obj1.execute();

    // }

    //-----------------------------------------------------------------------------------------------------
}

// this is a anonymous inner class (it can be carried out with the help of abstract or interface)

    // interface test{
    //     public void execute();
    // }
    //-----------------------------------------------------------------------------------------------------
    abstract class test{
        abstract  public void execute();
    }

class  main2{

    public static void main(String[] args) {
        // OuterClass.InnerClass obj = new OuterClass.InnerClass(); // this is how we can  create a object of an inner class
        // obj.inner();

        // OuterClass obj2 = new OuterClass();
        // obj2.outer();
        //-----------------------------------------------------------------------------------------------------

        // to create an object of an non static inner class we need to create a object of outer class then do the following
        // OuterClass obj1 = new OuterClass();
        // OuterClass.InnerClass obj2 = obj1.new InnerClass(); 
        // // or(below and above are the objects of non static inner class)
        // OuterClass.InnerClass obj3 = new  OuterClass().new  InnerClass();

        // obj2.execute();

        //-----------------------------------------------------------------------------------------------------
        // OuterClass obj2 = new OuterClass();
        // obj2.execute();
        //-----------------------------------------------------------------------------------------------------
        
        test obj1 = new test() {
        public void execute(){
            System.err.println("Executing the anonymous class");
        }
        };

        obj1.execute();
    }
}