/*
 * Objective : Write a Java program to insert an element (specific indrex) into an array.
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class array_insert {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1,n2;
        System.out.println("Enter the size of the array ");
        n1 = sc.nextInt();
        int[] arr = new int[n1];
        System.out.println("Enter the"+(n1-1)+" elements in the array ");
        for(int i = 0; i<n1; i++) {
            arr[i] = sc.nextInt();
        }
        int target;
        System.out.println("Enter the target index you wanna insert");
        target = sc.nextInt();
        int element;
        System.out.println("Enter the element you want to insert");
        element = sc.nextInt();
        for(int i = n1-2; i>=target; i--) {
            arr[i+1] = arr[i];
        }
        arr[target] = element;
        System.out.println("Array after inserting element of index "+target+" is ");
        for(int i = 0; i<n1;i++) {
            System.out.print(arr[i]+" ");
        }
    sc.close();
    }  
}
