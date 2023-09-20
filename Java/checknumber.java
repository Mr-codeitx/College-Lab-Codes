import java.util.*;

public class checknumber{
      
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float num;
        System.out.println("Enter the number ");
        num = sc.nextFloat();
        if(num == 0){
            System.out.println("The number is equal to zero");
        }
        else if(num>0){
            System.out.println("The number is positive ");
        }
        else {
            System.out.println("The number is negative ");
        }
        sc.close();
    }
}