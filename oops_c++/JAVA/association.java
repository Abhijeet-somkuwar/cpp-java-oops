
class Passport{
    private int passportNo;

    public Passport(int passportNo) {
        this.passportNo = passportNo;
    }

    public int getpassportno(){
        return passportNo;
    }

}

class tourist{
    private String tourist_name;
    private Passport passport;   // this is one to one relationship

    public tourist(String tourist_name, Passport passport) {
        this.passport = passport;
        this.tourist_name = tourist_name;
    }

    public void details(){
        System.out.println("Tourist name is "+ tourist_name);
        System.out.println("Tourist passport no is "+ passport.getpassportno());
    }
    

}


class Main3{
    public static void main(String[] args) {
        Passport pass = new Passport(1234);
        tourist tourist = new tourist("abhijeet", pass);
        tourist.details();
    }
}
