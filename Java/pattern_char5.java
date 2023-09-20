import java.util.Scanner;

public class pattern_char5 {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    System.out.println("Enter the value of n ");
    n = sc.nextInt();
    
    for(int row = 1; row<=n; row++) {
        for(int col = 1; col<=n; col++) {
           if(col>=1 && col<=n-row) {
            System.out.print("  ");
           }
           else {
             System.out.print((alpha++) + " ");
           }
        }
        
        System.out.println();
    }
    sc.close();
}
}
