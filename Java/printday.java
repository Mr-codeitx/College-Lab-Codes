/* Objective : WAP to print day name of a week day number starting sunday as day 1.
 * Developed by : Nikhil Mishra(2102900100097)
 */

import java.util.*;
public class printday {
    public static void main(String[] args) {
        int day;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the day number ");
        day = sc.nextInt();

        switch (day) {
            case 1:
                System.out.println("Sunday");
                break;

            case 2:
                System.out.println("Monday");
                break;
            case 3:
                System.out.println("Tuesday");
                break;
            case 4:
                System.out.println("Wednesday");
                break;
            case 5:
                System.out.println("Thursday");
                break;
            case 6:
                System.out.println("Friday");
                break;
            case 7:
                System.out.println("Saturday");
                break;

            default:
                System.out.println("Wrong Input");
                break;
        }
        sc.close();

    }
}
