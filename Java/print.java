/*
 * Objective : Pattern 10;
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class print {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n ");
        n = sc.nextInt();
        char alpha = 'a';
         for(int row  = 1; row<n; row++) {
            for(int col = 1; col<=row; col++) {
                System.out.print((alpha)+" ");
            }
            alpha++;
            System.out.println();
        }
    sc.close();   
    }
    
}
