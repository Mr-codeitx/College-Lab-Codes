
import java.util.Scanner;
public class first {
    
    public static void main(String[] args) {
        String str = "I like mango and apple";
    //Length of the string;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the start and end index");
    int start,end;
    start = sc.nextInt();
    end = sc.nextInt();
    if(end>start) System.out.println(str.substring(start, end));
    else System.out.println("Can't print");
    //str.contains
    System.out.println(str.contains("I like"));
    System.out.println(str.contains("S"));
    System.out.println(str.replace('m','T')); 
    //str.substring
    sc.close();
    }
}
