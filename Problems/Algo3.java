import java.util.ArrayList;
import java.util.*;

	
public class Algo3 {

	public static void main(String[] args)
    {
    	double points[] = {0.0, 0.4, 0.6, 1, 1.4, 2.4, 2.6, 3.2, 3.7};
        int answer = 1;
        double size = 1.0;
        double start = 0.0;
        start = points[0];
        for(int i = 0; i < points.length; i++)
        {
            if(start+size < points[i])
            {
                start = points[i];
                answer++;
            }
        }
        System.out.println(answer);
    }
}