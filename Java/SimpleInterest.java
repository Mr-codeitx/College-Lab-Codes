import java.util.*;
 public class SimpleInterest{
   public static void main(String [] args){
    int amount;
   double time;
   float interest;
   
   Scanner sc = new Scanner(System.in);
amount = sc.nextInt();
   time = sc.nextDouble();
   interest = sc.nextFloat();
   
   System.out.println("The simple interest is "+((time*interest*amount)/100) );
sc.close();
}
}