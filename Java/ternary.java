import java.util.* ;
public class ternary{
   public static void main(String args[]) {
    int a,b;
    Scanner sc = new Scanner(System.in);
    a = sc.nextInt();
    b = sc.nextInt();
    int c = (a>b)?a:b;
    System.out.println("the largest number is "+c);
    
    sc.close();

}
}