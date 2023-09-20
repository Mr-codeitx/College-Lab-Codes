/*
 * Objective : Write a Java program to reverse an array of integer values
 * by : Nikhil Mishra(2102900100097)
 */

import java.util.Scanner;
public class array_reverse {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the size of the array ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        int start = 0, end = n-1;
        while(start<=end) {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            start++;
            end--;
        }
        System.out.println("The array after reversing : ");
        for(int i = 0; i<n; i++) {
            System.out.print(arr[i]+ " ");
        }

    sc.close();
    }  
}
