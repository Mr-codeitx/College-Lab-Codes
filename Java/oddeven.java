/* Objective : WAP to find whether a number is even or odd
 * Developed by : Nikhil Mishra
 */


import java.util.*;

public class oddeven{
     public static void main(String[] args) {
     int a;
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter the number ");
     a = sc.nextInt();
     if(a%2 == 0){
        System.out.println("The Number is even");
     }
     else{
        System.out.println("The number is odd");
     }

     sc.close();
    }
}