
/* WAP to check a triangle is a equilateral, isosceles or scalene
*  Developed by : Nikhil Mishra(2102900100097)
*/
import java.util.*;

public class triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int side1, side2, side3;
        System.out.println("Enter the first side ");
        side1 = sc.nextInt();
        System.out.println("Enter the second side ");
        side2 = sc.nextInt();
        System.out.println("Enter the third side ");
        side3 = sc.nextInt();

        if (side1 == side2 && side1 == side3) {
            System.out.println("The triangle is equilateral as all sides are equal");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            System.out.println("The triangle is isosceles");
        } else {
            System.out.println("The triangle is scalene ");
        }
        sc.close();
    }
}
