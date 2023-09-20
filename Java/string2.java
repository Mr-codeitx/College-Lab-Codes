import java.util.Scanner;
import java.lang.String;
public class string2 {
    
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        str = sc.next();
        String vowel = "aeiou";
        String vowel2 = "AEIOU";
        int count = 0,count2 = 0;
        for(int i = 0; i<str.length(); i++){
            if(vowel.contains((String.valueOf(str.charAt(i))))) count2++;
            if(vowel2.contains((String.valueOf(str.charAt(i)))))count2++;
            if(str.charAt(i) == 'a' ||str.charAt(i) == 'e' ||str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u' || str.charAt(i) == 'A' || str.charAt(i) == 'E' || str.charAt(i) == 'I' || str.charAt(i) == 'O' || str.charAt(i) == 'U' ) count++;
        }
        System.out.println("The number of vowels "+count);
        System.out.println("The number of vowels "+count2);
sc.close();
    }
}
