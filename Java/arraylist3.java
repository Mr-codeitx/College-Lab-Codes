import java.util.ArrayList;
import java.util.ListIterator;
public class arraylist3 {

    public static void main(String[] args) {
      ArrayList<String>arr = new ArrayList<>();
      arr.add("Hello");
      arr.add("world");
      arr.add("NIKHIL");
      arr.add("I love india");
      System.out.println(arr.size());
      System.out.println(arr.subList(1, 3));
      System.out.println(arr.isEmpty());
      System.out.println(arr.contains("Hello"));
      System.out.println(arr.indexOf("I love india"));
      for(int i = 0; i<arr.size() ; i++) {
        System.out.print(arr.get(i)+" ");
      }
      ListIterator<String> lr = arr.listIterator(0);
        System.out.println();
      for(String val:arr){
          System.out.print(val+" ");
      }
    }
    
}
