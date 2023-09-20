/*
 * Objective : Write a Java program to find the second largest element in an array.
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class second_largest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1;
        System.out.println("Enter the size of the first array ");
        n1 = sc.nextInt();
        int[] arr = new int[n1];
        System.out.println("Enter the elements of the first array ");
        for(int i = 0; i<n1; i++) {
            arr[i] = sc.nextInt();
        }
	    int largest = arr[0],second = -1;
	    
	    for(int i = 1; i<n1;i++) {
	        if(arr[i]>largest){
	            second = largest;
	            largest = arr[i];
	        }
	        else if(arr[i] > second && arr[i]<largest){
	                second = arr[i];
	        }
	        
	    }
	    if(second == -1) System.out.println("There is no second largest element");
	    else System.out.println("The second largest element is "+second);
    sc.close();
    }  
}
