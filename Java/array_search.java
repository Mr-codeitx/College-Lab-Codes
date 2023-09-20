/*
 * Objective : Write a Java program to find the index of an array element. If the element is not found print -1
 * by : Nikhil Mishra(2102900100097)
 */

import java.util.Scanner;
public class array_search {

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
        int key;
        System.out.println("Enter the element you want to search ");
        key = sc.nextInt();
        int index = -1;
        for(int i = 0; i<n; i++) {
           if(arr[i] == key)  index = i;
        }
        if(index != 1) System.out.println("The element is found at the index "+index);
        else System.out.println("The element is not found -1");

    sc.close();
    }  
}
