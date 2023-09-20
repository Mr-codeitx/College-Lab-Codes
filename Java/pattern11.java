import java.util.Scanner;

public class pattern11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n ");
        n = sc.nextInt();
        for (int row = 1; row <= 2 * n - 1; row++) {
            for (int col = 1; col <= n; col++) {
                if(row<=n && col>=n-row+1 && col<=n) {
                  System.out.print("*");
                }
                else if(row > n && col >= row - n+1 && col<=n) {
                    System.out.print("*");
                }
                else System.out.print(" ");
            }
            System.out.println();
        }

        sc.close();
    }
}
