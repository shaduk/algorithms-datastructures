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
        StringBuilder ans = new StringBuilder();
        String[] ary = str.split(" ");
        for(int i = ary.length-1; i >= 0; i--)
        {
            if(i!=0)
            ans = ans.append(ary[i]).append(" ");
            else
            ans = ans.append(ary[i]);
        }
        return ans.toString();
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();
        p(reverse(word));
        System.exit(0);
    }
}