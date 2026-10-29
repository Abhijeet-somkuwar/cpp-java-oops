
import java.security.PublicKey;


interface Car{

    public  void wheels();
    public  void doors();

    default void horn(){
        System.out.println("car Honking......");
    }
}

//interface can inherite another inteface
interface vehicle extends Car{   

    public  void airbags();
    public void  engin();
     default void horn(){
        System.out.println(" vehivle Honking......");
    }
}

class Tata implements vehicle{
    public void wheels(){
        System.err.println("car should have 4 wheels");
    }

    public  void doors(){
        System.err.println("car should have 4 wheels");

    }

    public  void airbags(){
        System.err.println("car should airbags");

    }

    public void engin(){
        System.err.println("car should bs6 engin");
        
    }

}

class Main1{

    public static void main(String[] args) {
        Tata nexon = new Tata();

        nexon.airbags();
        nexon.doors();
        nexon.engin();
        nexon.wheels();
        nexon.horn();


        int nums[] = {1,1161616116,1,15,1};

        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
    }
}