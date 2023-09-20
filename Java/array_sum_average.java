/*
 * Objective : Write a Java program to sum and average values of an array
 * by : Nikhil Mishra(2102900100097)
 */

import java.util.Scanner;
public class array_sum_average {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array ");
        int n;
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        int sum = 0;
        for(int i = 0; i<n ;i++) {
            sum += arr[i];
        }
        System.out.println("The sum of all the elements in the array is : "+sum);
        System.out.println("The average of all the elements in the array is : "+ (sum/n) );
        sc.close();
    }
}
