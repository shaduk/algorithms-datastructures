import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class MaxCS
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static void LCS(String s1, String s2)
    {
         int[][] opt = new int [100][100];
         int sizea = s1.length();
         int sizeb = s2.length();
         String ans = "";
         for(int i = 0; i < sizea; i++)
            {
                opt[0][i] = 0;
            }
        
        for(int i = 0; i < sizeb; i++)
            {
                opt[i][0] = 0;
            }
        
        for(int i = 1; i < sizea; i++)
        {
            for(int j = 1; j < sizeb; j++)
                {
                if(s1.charAt(i) == s2.charAt(j))
                    {
                    opt[i][j] = opt[i-1][j-1] + 1;
                }
                else
                    {
                    opt[i][j] = Math.max(opt[i-1][j], opt[i][j-1]);
                }
            }
         }
         
         int i = sizea-1, j = sizeb-1;
       
            while(i > 0 && j > 0)
            {
              if(s1.charAt(i) == s2.charAt(j))
                  {
                  ans = ans + s1.charAt(i);
                  i--;
                  j--;
              }
                else if(opt[i][j-1] >= opt[i-1][j])
                    {
                    j--;
                }
                else
                    i--;
            }  
            String reverse = new StringBuffer(ans).reverse().toString();
            p(opt[i][j]);
            p(reverse);
            return;
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new FileReader("input0.txt"));
        String word1 = br.readLine();
        String word2 = br.readLine();
        LCS(word1, word2);
        System.exit(0);
    }
}