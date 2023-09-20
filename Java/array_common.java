/*
 * Objective : Write a Java program to insert an element (specific indrex) into an array.
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class array_common {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1,n2;
        System.out.println("Enter the size of the first array ");
        n1 = sc.nextInt();
        int[] arr = new int[n1];
        System.out.println("Enter the elements of the first array ");
        for(int i = 0; i<n1; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the size of the second array ");
        n2 = sc.nextInt();
        int[] arr2 = new int[n2];
        System.out.println("Enter the elements of the second array ");
        for(int i = 0; i<n2; i++) {
            arr2[i] = sc.nextInt();
        }
        System.out.println("The common elements are ");
        for(int i = 0; i<n1; i++) {
            for(int j = 0; j<n2; j++) {
                if(arr[i] == arr2[j]) {
                    System.out.print(arr[i]+" ");
                }
            }
        }
    sc.close();
    }  
}
