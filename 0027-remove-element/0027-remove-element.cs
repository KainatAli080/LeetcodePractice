public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int s = nums.Length;

        // we're looping through the array, decreasing s when the element to be removed is added to the end
        // no need to check the end
        // if end checked, swapping would be messed with
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