import java.util.Scanner;

public class Insert_in_array {
     public static void main(String[] args) {
        int n;
        System.out.println("Enter the size of the array ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.println("Enter the number of elements ");
        int size = sc.nextInt();
        System.out.println("Enter the elements ");
        int[] arr = new int[n];
        for(int i = 0 ; i<size; i++ ){
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the element and its position you want to enter");
        int element = sc.nextInt();
        int target = sc.nextInt();

        for(int i = size-1; i>=target; i-- ) {
            arr[i+1] = arr[i];
        }
        
        arr[target] = element;
        System.out.println("Element is inserted and the new array is ");
        for(int i = 0; i<=size; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
     }
    
}
