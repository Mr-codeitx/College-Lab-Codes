import java.util.Scanner;

public class pattern_char6 {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n,count = 1;
    System.out.println("Enter the value of n ");
    n = sc.nextInt();
    
    for(int row = 1; row<=n; row++) {
        for(int col = 1; col<=n; col++) {
           if(col>=1 && col<=n-row) {
            System.out.print("  ");
           }
           else {
             System.out.print(count + " ");
           }
        }
        count = count+2;
        
        System.out.println();
    }
    sc.close();
}
}
