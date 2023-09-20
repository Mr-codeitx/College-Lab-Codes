/* Objective : Write a program that accepts three numbers from the user
 and prints "increasing" if the numbers are in increasing order,
  "decreasing" if the numbers are in decreasing order,
 and "Neither increasing or decreasing order" otherwise
 
 * Developed by : Nikhil Mishra(2102900100097)
 */

import java.util.*;

public class incdec {

    public static void main(String[] args) {
        int num1, num2, num3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number ");
        num1 = sc.nextInt();
        System.out.println("Enter the second number ");
        num2 = sc.nextInt();
        System.out.println("Enter the 3rd number ");
        num3 = sc.nextInt();

        if (num1 > num2 && num2 > num3) {
            System.out.println("Numbers are in decreasing order");
        } else if (num1 < num2 && num2 < num3) {
            System.out.println("Number are in increasing order");
        } else {
            System.out.println("Neither increasing nor decreasing");
        }

        sc.close();
    }

}
