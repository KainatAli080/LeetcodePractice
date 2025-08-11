public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int k = 1;
        // Using two-pointers
        // Only changing value at i when duplicates are passed over
        for(int i = 1, j = 1; j < nums.Length; j++){
            if(nums[j] != nums[i-1]){
                nums[i] = nums[j];
                i++;
                k++;
            }
        }
        return k;
    }
}