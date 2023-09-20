/* Objective : WAP to create a basic calculator using switch.
 * Developed by : Nikhil Mishra(2102900100097)
 */

import java.util.*;

public class calculator {
    public static void main(String[] args) {
        int choice, num1, num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your first number");
        num1 = sc.nextInt();
        System.out.println("Enter your second number");
        num2 = sc.nextInt();
        System.out.println("Enter your choice");
        System.out.println("1. ADD 2. Subtract 3. Multiplication 4.Division");
        choice = sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("The sum of 2 numbers is " + (num1 + num2));
                break;

            case 2:
                System.out.println("The subtraction of 2 numbers is " + (num1 - num2));
                break;
            case 3:
                System.out.println("The multiplication of 2 numbers is " + (num1 * num2));
                break;
            case 4:
                System.out.println("The division of 2 numbers is " + (num1 / num2));
                break;
            default:
                System.out.println("Wrong Input");
                break;
        }
        sc.close();
    }
}
