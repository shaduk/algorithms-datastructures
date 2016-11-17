import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class FirstNonRepeatChar
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static Character FirstNonRepeat(String s)
    {
         Hashtable<Character, Integer> numbers = new Hashtable<Character, Integer>();
         
         for(int i = 0; i < s.length(); i++)
         {
             Character curr = s.charAt(i);
             if(numbers.containsKey(curr))
             {  
                int value = numbers.get(curr);
                numbers.put(curr, value+1);
             }
             else
             {
                 numbers.put(curr, 1);
             }
         }
         for(int i = 0; i < s.length(); i++)
         {
             if(numbers.get(s.charAt(i)) == 1)
             return s.charAt(i);
         }
         return '0';
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();
        p(FirstNonRepeat(word));
        System.exit(0);
    }
}