/* Objective : Write a Java program that reads a floating-point number
 and prints "zero" if the number is zero.
 Otherwise, print "positive" or "negative".
 * Developed by : Nikhil Mishra(2102900100097)
 */

import java.util.*;

public class check_pos_neg {
  public static void main(String[] args) {
    int a;
    Scanner sc = new Scanner(System.in);
    a = sc.nextInt();
    if (a > 0) {
      System.out.println("Number is positive");
    } else if (a < 0) {
      System.out.println("Number is negative");
    } else {
      System.out.println("Number is equal to 0");
    }
sc.close();
  }
}