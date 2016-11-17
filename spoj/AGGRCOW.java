import java.io.*;
import java.util.*;
import static java.lang.Integer.parseInt;



public class AGGRCOW
{
    private static BufferedReader br;
    
    static void p(Object l){
    System.out.println(l);
    }
    
    public static void main(String[] args) throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        int test = parseInt(br.readLine());
        String temp[] = br.readLine().split(" ");
        int N = parseInt(temp[0]);
        int C = parseInt(temp[1]);
        while(test-- > 0)
        {
            for(int i = 0; i < N; i++)
            {
            int input = parseInt(br.readLine());
            p(input);
            }
            
        }
        System.exit(0);
    }
}