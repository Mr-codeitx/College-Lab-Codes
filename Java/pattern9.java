import java.util.Scanner;

public class pattern9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n ");
        n = sc.nextInt();
        for(int row =1; row<=n; row++) {
            for(int col = 1; col<=2*n; col++) {
                if(col>=row+1 && col<=2*n-row) System.out.print(" ");
                else System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
