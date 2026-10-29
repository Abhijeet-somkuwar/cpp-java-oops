import java.util.*;

class Product{
    private String name;
    private double price;
    public String category;

    public Product(String name,double price,String category) {
        this.name = name;
        this.price =price;
        this.category =category;
    }

    public void  details(){
        System.out.println("Product name: "+ name);
        System.out.println("Price: "+ price);
        System.out.println("category: "+ category);
    }


}

class Car extends Product{
    private String brandName;
    private String fuleType;

    public Car(String name,double price, String brandName, String fuleType) {
        super(name, price,"car");
        this.brandName = brandName;
        this.fuleType =fuleType;

    }
    @Override
    public void  details(){
        super.details();
        System.out.println("Product category: "+ super.category);
        System.out.println("Carname: "+ brandName);
        System.out.println("Fuletype: "+ fuleType);
    }
    
}

class  Main{

    public static void main(String[] args) {
        Car obj1 = new Car("Automobile",122313131,"mercedec", "Petrol");
        obj1.details();
        
    }
}