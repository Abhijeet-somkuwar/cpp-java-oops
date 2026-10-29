import java.util.Scanner;

class BasicOfJava {

    public static void main(String[] args) {
        // int a = 257;
        // byte b = 66;
        // float f = 5.6f;

        // // a = (int)f;
        // b = (byte)a;  //type casting int to byte
        // System.out.println(b);
        // // System.out.println(a);
      
        // int n = 5;
        // for(int i = 1; i <= n; i++){
        //     for(int j = 0; j < i; j++){
        //         System.out.print("* ");
        //     }
        //     System.out.print("\n");
        // }


        //----------------------------------------------------------------------------------------------------
        // int a = 4;   //ternary operators
        // int b = 8;

        // int take = a > b ? a:b;

        // System.out.println(take);
        //----------------------------------------------------------------------------------------------------
        // String name = "Abhijeet Somkuwar";        

        // System.err.println(name.length());
        // System.err.println(name.charAt(9));
        // System.err.println(name.substring(0,8));

        // String first_name = "Rahul";
        // String last_name = "Somkuwar";

        // String full_name = " ";

        // // full_name = first_name + " " + last_name;
        // first_name += " " + last_name;

        // System.err.println(full_name);
        // System.err.println(first_name);

        //----------------------------------------------------------------------------------------------------

        // Scanner scanner = new Scanner(System.in);

        // System.out.print("Enter any number1: ");
        // double num1 = scanner.nextDouble();

        // System.out.print("Enter any number2: ");
        // double num2 = scanner.nextDouble();

        // double add = num1 + num2;

        // System.out.println("Addition of number1(" + num1 + ")" + " and number2("+num2+")" + "= " + add);


        // System.out.print("Enter any FirstName: ");
        // String first_name = scanner.nextLine();

        // System.out.print("Enter any number2: ");
        // String last_name = scanner.nextLine();

        // String add_String = first_name +" "+ last_name;

        // System.out.println(add_String);

        // scanner.close();
        //----------------------------------------------------------------------------------------------------

        // final int a = 10;

        // //a += 90; --> this is not possible as we have set it as final(Making it constant)

        // System.out.println(a);

        //----------------------------------------------------------------------------------------------------

        // int[] arr = new int[9]; // defining and seting the size of an array
        // arr[0] = 99;
        // System.out.println(arr[1]);
        // System.out.println(arr[0]);

        // int[][] arr2 = {{1,2,3},{4,5,6},{7,8,9}};

        // int[] arr3= {0,1,2,3};

        // System.out.println(arr2.length);
        // System.out.println(arr3.length);
        
        // for(int i = 0; i < arr2.length; i++){            //printing a 2D array
            
        //     for(int j = 0; j < arr2[i].length; j++){
        //         if(arr2[i][j] % 2 == 0){
        //             System.err.print("*"+",");
        //         }else{
        //             System.out.print(arr2[i][j]+",");
        //         }
                
        //     }
        //     System.err.println("");
        // }

        //----------------------------------------------------------------------------------------------------

        // Scanner sc = new Scanner(System.in);

        // System.out.print("Enter the Day no: ");
        // int day = sc.nextInt();

        // switch(day){
        //     case 1:
        //         System.out.println("Monday");
        //         break;
        //     case 2:
        //         System.out.println("tuesday");
        //         break;
        //     case 3:
        //         System.out.println("wednesday");
        //         break;
        //     case 4:
        //         System.out.println("thusday");
        //         break;
        //     case 5:
        //         System.out.println("friday");
        //         break;
        //     case 6:
        //         System.out.println("saturday");
        //         break;
        //     case 7:
        //         System.out.println("Sunday");
        //         break;
        //     default:
        //         System.out.println("You had entered wrong Day no. Try to type from 1-7");
        //         break;
        // }

        //----------------------------------------------------------------------------------------------------


            // Scanner sc = new Scanner(System.in);

            // System.err.print("Enter the size of the array: ");
            // int n = sc.nextInt();
            // int[] arr = new int[n];
            // int sum =0;

            // for(int i = 0; i < n; i++){
            //     System.out.print("Enter "+i+"th"+" element: ");
            //     int ele = sc.nextInt();
            //     arr[i] = ele;
            // }
            // System.out.print("your array is: ");
            // for(int i = 0; i < n; i++){
            //     System.out.print(arr[i]+",");
            // }

            // for(int i = 0; i < n; i++){
            //     sum += arr[i];
            // }

            // System.out.println("\n The sum of the all of the elements in the array is: " + sum);

        //----------------------------------------------------------------------------------------------------

            try {
            int a = 89;
            int b = 0;

            int divide = a/b;
                
            } catch (Exception e) {

                System.out.println(e);
            }
            
            


    }
}