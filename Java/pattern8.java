import java.util.Scanner;

public class pattern8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n ");
        n = sc.nextInt();
        for (int row = 1; row <= 2 * n - 1; row++) {
            for (int col = 1; col <= n; col++) {
                if(row<=n && col>=1 && col <= row ) {
                    System.out.print("*");
                }
                else if(true) {

                }
            }
        }

        sc.close();
    }
}

