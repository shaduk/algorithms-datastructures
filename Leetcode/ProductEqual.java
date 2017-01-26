import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        while(T-- > 0)
        {
            int N = scan.nextInt();
            int p = scan.nextInt();
            int[] hash = new int[1002];
            int[] myarray = new int[N];
            int found = 0;
            for(int i = 0; i < N; i++)
            {
                int temp = scan.nextInt();
                hash[temp] = 1;
                myarray[i] = temp;
            }
            for(int i = 0; i < N; i++)
            {
                if(p%myarray[i] == 0 && p/myarray[i] >=0 && p/myarray[i] <= 1000 && hash[p/myarray[i]] == 1)
                {
                System.out.println("Yes");
                found = 1;
                break;
                }
            }
            if(found == 0)
            System.out.println("No");
            
        }
	}
}