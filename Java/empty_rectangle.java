/*
 * Objective : Pattern 2;
 * by : Nikhil Mishra(2102900100097)
 */
import java.util.Scanner;

public class empty_rectangle {
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n;
    System.out.println("Enter the value of n ");
    n = sc.nextInt();
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n; col++) {
            if(row == 1 || row == n) System.out.print("* ");
            else if((row>1 && row<n) && (col == 1 ||col==n)) System.out.print("* ");
            else System.out.print("  ");
        }
        System.out.println();
    }
    sc.close();
}
}