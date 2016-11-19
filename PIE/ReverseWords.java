import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class ReverseWords
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static String reverse(String str)
    {
        String ans = "";
        String[] ary = str.split(" ");
        for(int i = ary.length-1; i >= 0; i--)
        {
            ans = ans + ary[i]+ " ";
        }
        return ans;
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();
        p(reverse(word));
        System.exit(0);
    }
}