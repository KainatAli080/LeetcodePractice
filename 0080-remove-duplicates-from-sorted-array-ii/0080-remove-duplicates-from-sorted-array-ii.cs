public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if (nums.Length <= 2) 
            return nums.Length;

        int i = 2; // starting from 2 because with duplicates > 2 can't occur before index 2
        for(int j = 2; j < nums.Length; j++) {
            // Why checking 2 back?
            // If different, this is either the first or second time we’ve seen the value, so we keep it. 
            //If same, that means we’ve already seen this value twice, so we skip it.
            if(nums[i-2] != nums[j]){
                nums[i] = nums[j];
                i++;    
            }
        }

        return i;
    }
}