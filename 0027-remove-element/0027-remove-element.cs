public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int s = nums.Length;
        int k = 0;

        for(int i = 0; i < s;){
            if(nums[i] == val){                
                nums[i] = nums[s-1];
                s--;
            }
            else{
                // only moving forward when values don't match
                i++;
            }
        }        
        return s;
    }
}