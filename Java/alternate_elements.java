import java.util.Scanner;

public class alternate_elements{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("enter the size of the array ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of array ");
        for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("The alternate elements are ");
        for(int i = 0; i<n; i = i+2) {
            System.out.print(arr[i]+" ");
        }

        sc.close();
}
}