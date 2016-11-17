import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class AllPermutation
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static void Permu(String s, String ans)
    {
        
        if(s.length() == 0)
            p(ans);
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                String temp = ans + s.charAt(i);
                Permu(s.substring(0,i) + s.substring(i+1, s.length()), temp);
            }
        }
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();
        Permu(word, "");
        System.exit(0);
    }
}