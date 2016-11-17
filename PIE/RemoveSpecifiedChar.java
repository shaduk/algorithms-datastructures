import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class RemoveSpecifiedChar
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static String Remove(String str, String remove)
    {
        String ans = "";
        Hashtable<Character, Integer> toremove = new Hashtable<Character, Integer>();
        for(int i = 0; i < remove.length(); i++)
            toremove.put(remove.charAt(i), 1);
        for(int i = 0; i < str.length(); i++)
        {
            if(!toremove.containsKey(str.charAt(i)))
            ans = ans + str.charAt(i);
        }
        return ans;
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();
        String remove = br.readLine();
        p(Remove(word, remove));
        System.exit(0);
    }
}