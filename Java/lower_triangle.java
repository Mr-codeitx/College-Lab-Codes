import java.util.Scanner;
public class lower_triangle {

    static void input(int[][] matrix ) {
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i<matrix.length; i++) {
        for(int j = 0; j<matrix[0].length; j++) {
            matrix[i][j] = sc.nextInt();
        }
      }
      sc.close();
    }
    static void upper(int[][] matrix) {
         for(int i = 0; i<matrix.length; i++) {
            for(int j = 0; j<matrix.length; j++) {
                if(i<=j) System.out.print(matrix[i][j]+" ");
                else System.out.print("  ");
            }
            System.out.println();
        }
    }
    public static void main(String [] args) {
        System.out.println("Enter the size ");
        int n = 3;
        int[][] matrix1 = new int[n][n];
        System.out.println("Enter the data of matrix first ");
        input(matrix1);
        upper(matrix1);
    }
}