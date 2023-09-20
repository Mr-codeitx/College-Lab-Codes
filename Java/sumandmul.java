import java.util.*;

public class sumandmul {
    public static void main(String[] args) {
        int number,sum = 0,mul = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ");
        number = sc.nextInt();
        while(number!=0){
            int temp;
            temp = number%10;
            number = number/10;
            sum = sum+temp;
            mul = mul*temp;
        }
        System.out.println("The sum of digits is "+sum);
        System.out.println("The multiplication of digits "+mul);

    sc.close();
    }
}
