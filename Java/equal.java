/* Objective : Write a Java program that reads in two floating-point numbers 
and tests whether they are the same up to three decimal places.
* Developed by : Nikhil Mishra(2102900100097)
*/

import java.util.*;

public class equal {
    public static void main(String[] args) {
        float a, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number ");
        a = sc.nextFloat();
        System.out.println("Enter the second number ");
        b = sc.nextFloat();
        a *= 1000;
        b *= 1000;
        a = (int) a;
        b = (int) b;
        if (a == b) {
            System.out.println("Number are same");
        } else {
            System.out.println("Number are not same");
        }

        sc.close();

    }
}
