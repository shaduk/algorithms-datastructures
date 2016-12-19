public class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> ans = new ArrayList<>();
        for(int i = 1; i <= n; i++)
        {
            String temp = "";
            if(i%3 == 0)
                temp = temp + "Fizz";
            if(i%5 == 0)
                temp = temp + "Buzz";
            if(i%3 != 0 && i%5 != 0)
                temp = Integer.toString(i);
            ans.add(temp);
        }
        return ans;
    }
}