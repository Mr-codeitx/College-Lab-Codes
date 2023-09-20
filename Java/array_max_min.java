/*
 * Objective : Finding maximum and minimum in the array;
 * by : Nikhil Mishra(2102900100097)
 */

import java.util.Scanner;

public class array_max_min {
    public static void main(String[] args) {
         int n;
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter the size of the array");
         n = sc.nextInt();
         int[] arr = new int[n];
         System.out.println("Enter the elements of the array ");
         for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
         }
         int max = arr[0],max_index = 0;
         int min = arr[0], min_index = 0;
         for(int i = 1; i<n; i++) {
            if(arr[i] > max){
               max = arr[i];
               max_index = i;
            } 
            if(arr[i]<min) {
               min = arr[i];
               min_index = i;
            }
         }
         System.out.println("The maximum number is "+max+" and its index is "+max_index);
         System.out.println("The minimum Number is "+min+" and the index is "+min_index);
         sc.close();
    }  
}
