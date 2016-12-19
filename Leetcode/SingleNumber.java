public class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> hm = new HashMap<>();
        int temp = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(hm.containsKey(nums[i]))
                hm.put(nums[i], hm.get(nums[i])+1);
            else
                hm.put(nums[i], 1);
        }
        
        for(int i = 0; i < nums.length; i++)
        {
            if(hm.get(nums[i]) == 1)
                temp = nums[i];
        }
        
        return temp;
    }
}