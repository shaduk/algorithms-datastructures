public class Solution {
	public ArrayList<Integer> maxset(ArrayList<Integer> a) {
	        long sum = 0, maxsum = 0, range = 0;
	        ArrayList<Integer> prev = new ArrayList<>();
	        ArrayList<Integer> ans = new ArrayList<>();
	       for(int i : a)
	       {
	           range++;
                if(i >= 0)
	           {
	               sum = sum + i;
	               prev.add(i);
	 
	           }
	           else
	           {
	              sum = 0;
	              prev.clear();
	           }
	           if ((maxsum < sum) || ((maxsum == sum) && (prev.size() > ans.size()))) {
	            maxsum = sum;
	            ans = (ArrayList<Integer>)prev.clone();
	        }
	       }
	       return ans;
	}
}
