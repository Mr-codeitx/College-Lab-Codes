import java.util.HashMap;
import java.lang.*;
public class hashmap{
    public static void main(String[] args) {
        HashMap<Character,Integer> ourmap = new HashMap<>();
        String str = "ABESIT ENGINEERING COLLEGE";
        ourmap.put('A',0);
        ourmap.put('E',0);
        ourmap.put('I',0);
        ourmap.put('O',0);
        ourmap.put('U',0);
        
        for(Character x : str.toCharArray() ) {
            if(ourmap.get(x) != null){
                int temp = ourmap.get(x);
                temp++;
                ourmap.put(x,temp);
            }
        }
        System.out.println(ourmap);

    }
}