import java.util.Scanner;

public class pattern5 {
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n;
    System.out.println("Enter the value of n ");
    n = sc.nextInt();
    for(int row = 1; row<=2*n; row++) {
        for(int col = 1; col<=n; col++ ) {
            if(col>=1 && col<=row) {
                System.out.print("*");
            }
            else if(col>=1 && col<=n-1) {
                System.out.print("*");
            }
            else{
                System.out.print(" ");
            }
        }
        System.out.println();
    }

    sc.close();

    }
}