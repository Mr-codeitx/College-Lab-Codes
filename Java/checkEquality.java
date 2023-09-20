/* Objective : Write a Java program that accepts three numbers and prints
 "All numbers are equal" if all three numbers are equal,
 "All numbers are different" if all three numbers are different and
 "Neither all are equal or different" otherwise
 
 * Developed by : Nikhil Mishra(2102900100097)
 */

import java.util.*;

public class checkEquality {
   public static void main(String[] args) {
      int a, b, c;
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the first number ");
      a = sc.nextInt();
      System.out.println("Enter the second number ");
      b = sc.nextInt();
      System.out.println("Enter the 3rd number ");
      c = sc.nextInt();

      if (a == b && b == c) {
         System.out.println("All numbers are equal");
      } else if (a != b && b != c && a != c) {
         System.out.println("All are different");

      } else {
         System.out.println("Neither all are equal or different");
      }
   sc.close();
   }
}
