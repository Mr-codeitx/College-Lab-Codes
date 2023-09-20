import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.println("*");
        for(int row = 1; row<=n; row++) {
            int count = 1;
                System.out.print("*");
                for(int col = 1; col<=row; col++) {
                    System.out.print(count++);
                }
                int temp = row-1;
                for(int col = 1; col<=row-1; col++) {
                   System.out.print(temp--);
                }
                System.out.print("*");
                System.out.println();
        }
        for(int row = 1; row<=n-1; row++) {
            System.out.print("*");
            for(int col = 1; col<=n-row; col++) {
                System.out.print(col);
            }
            int temp = n-row-1;
            for(int col = 1; col<=n-row-1; col++) {
               System.out.print(temp--);
            }
            System.out.print("*");
            System.out.println();
        }
       System.out.println("*");





        sc.close();
    }
}

    
