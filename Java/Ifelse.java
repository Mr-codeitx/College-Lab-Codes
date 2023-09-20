import java.util.*;

public class Ifelse{
     public static void main(String[] args) {
     int a,b,c;
     Scanner sc = new Scanner(System.in);
     a = sc.nextInt();
     b = sc.nextInt();
     c  = sc.nextInt();

     if(a>b) {
        if(a>c){
          System.out.println("The Greatest num is : "+a);
        }
        else System.out.println("The Greatest num is : "+c);
    }
    else {
        if(b>c){ System.out.println("The Greatest num is : "+b); }
        else System.out.println("The Greatest num is : "+c);
     }
sc.close();
}
}