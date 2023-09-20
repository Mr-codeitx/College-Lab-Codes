import java.util.Scanner;

public class array_sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array ");
        for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        int sum = 0;
        for(int i = 0; i<n; i++) {
            sum += arr[i];
        }
        System.out.println("The sum is "+sum);
        System.out.println("The average of all the elements of the array is "+ (sum/n));
sc.close();
    }
}
