public class Solution {
    public char findTheDifference(String s, String t) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++)
        {
            ans = ans^s.charAt(i);
        }
        for(int i = 0; i < t.length(); i++)
        {
            ans = ans^t.charAt(i);
        }
        return (char)ans;
    }
}