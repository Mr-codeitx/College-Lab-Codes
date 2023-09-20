/*
 * Objective : Pattern 1;
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;
public class pattern10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n ");
        n = sc.nextInt();
        for(int row = 1; row<= n; row++ ) {
            for(int col = 1; col<= 2*n; col++) {
                if(col>=n-row+2 && col<=n+row-1) System.out.print(" ");
                else System.out.print("*");
            }
            System.out.println();
        }
    sc.close();   
    }
    
}
