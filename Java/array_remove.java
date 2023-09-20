/*
 * Objective : Write a Java program to remove an element (at specific index) from an array.
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class array_remove {
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
        int target;
        System.out.println("Enter the target index you wanna remove");
        target = sc.nextInt();
        for(int i = target+1; i<n; i++) {
            arr[i-1] = arr[i];
        }
        System.out.println("Array after removing element of index "+target+" is ");
        for(int i = 0; i<n-1;i++) {
            System.out.print(arr[i]+" ");
        }
    sc.close();
    }  
}
