public class Solution {
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    public String longestCommonPrefix(String[] strs) {
        // write your code here
        int m = 0;
        int minLength = 2132393;
        int StrLength = strs.length;
        String ans = "";
        Set<Character> set;
        for (String s : strs) {
            if (minLength > s.length()) {
                minLength = s.length();
            }
        }
        while (m < minLength) {
            set = new HashSet<Character>();
            for (String s : strs) {
                set.add(s.charAt(m));
            }
            if (set.size() == 1) {
                ans = ans + strs[0].charAt(m);
                m++;
            } else {
                break;
            }
        }
        return ans;
    }
}