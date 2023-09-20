import java.util.Scanner;
import java.lang.String;
public class Multi_array {

    static void display(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void input(int[][] a) {
         Scanner sc = new Scanner(System.in);
        for(int i=0; i<a.length; i++){
            for(int j=0; j<a[0].length; j++){
                a[i][j] = sc.nextInt();
            }
        }
        
    }

    static void sum(int[][] a, int[][] b) {
         Scanner sc = new Scanner(System.in);
        for(int i=0; i<a.length; i++){
            for(int j=0; j<a[0].length; j++){
                System.out.print((a[i][j] + b[i][j])+" ");
            }
            System.out.println();
        }
    }


    public static void main(String[] args) {
        System.out.println("Enter the size ");
        int n = 3;
        int[][] matrix1 = new int[n][n];
        System.out.println("Enter the data of matrix first ");
        input(matrix1);
        System.out.println("The first matrix is  ");
        display(matrix1);
        int[][] matrix2 = new int[n][n];
        System.out.println("Enter the elements of 2 matrix");
        input(matrix2);
        System.out.println("The 2nd matrix is");
        display(matrix2);
        System.out.println("The sum of 2 matrix is ");
        sum(matrix1,matrix2);

    }
}
