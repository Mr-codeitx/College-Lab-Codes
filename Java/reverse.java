import java.util.*;

public class reverse {
    public static void main(String[] args) {
        int number,reverse = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ");
        number = sc.nextInt();
        while(number!=0) {
            int temp;
            temp = number%10;
            reverse = reverse*10 + temp;
            number = number/10;
        }
        System.out.println("The reverse of the number is "+reverse);
    sc.close();
    }
}
