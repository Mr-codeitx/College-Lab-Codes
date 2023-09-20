import java.util.Scanner;

public class pattern_char1 {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    n = sc.nextInt();
    char count = 'A';
    for(int row = 1; row<=n; row++) {
        for(int col = 1; col<=n; col++) {
            if(col>=1 && col<=n-row) {
                System.out.print("  ");
            }
            else {
                 System.out.print(count +" ");
            }
        }
        count++;
        System.out.println();
    }
    sc.close();
}
}
