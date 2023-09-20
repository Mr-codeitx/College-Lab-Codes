import java.lang.String;

public class bubble_sort {
    public static void main(String[] args) {
        String[] str = {"amit","rahul","nikhil","tom"};
    int n = str.length;
    for(int i = 0; i<n-1; i++) {
        for(int j = 0; j<n-i-1;j++) {
          if(str[j].compareTo(str[j+1]) > 0){
             String x = str[j];
             str[j] = str[j+1];
             str[j+1] = x;
          }

        }
    }
    
    for(int i = 0; i<str.length; i++) {
        System.out.print(str[i]+" ");
    }

    }
}
