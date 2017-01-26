public class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0, j = 0;
        int count = 0;
        while(j < nums.length)
        {
            if(nums[j] == val)
            {
            j++;
            count++;
            }
            else
            {
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return nums.length-count;
    }
}