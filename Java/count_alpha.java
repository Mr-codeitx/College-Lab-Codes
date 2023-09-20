import java.util.Scanner;
import java.lang.String;
public class count_alpha {
    
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        str = sc.nextLine();
        
        int count = 0,count2 = 0,count3 = 0;
        for(int i = 0; i<str.length(); i++){
            char ch = str.charAt(i);
            if((ch >= 'a' && ch <= 'z') || (ch>='A' && ch<= 'Z')) count++;
            else if(ch >= '0' && ch<= '9') count2++;
            else count3++;
        }
        System.out.println("The number of alpha "+count);
        System.out.println("The number of numbers "+count2);
        System.out.println("The number of special characters "+count3);
sc.close();
    }
}
