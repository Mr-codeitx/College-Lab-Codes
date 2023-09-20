import java.util.Scanner;

public class trace_matrix {
    public static void main(String [] args) {
      int[][] matrix = new int[3][3];
      Scanner sc = new Scanner(System.in);
      int sum = 0;
      for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            matrix[i][j] = sc.nextInt();
            if(i == j) sum+=matrix[i][j];
        }
      }
      System.out.println("The trace is "+sum);

    sc.close();
    }
}
