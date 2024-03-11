class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> answer(s, 1);
        //answer = new int[s]{1};
        
        // using left and right product method
        int left = 1, right = 1;
        
        // starting from left and multiplying vals
        // answer[i] *= left and left *= nums[i] (for next)
        for(int i = 0; i < s; i++){
            answer[i] *= left;
            left *= nums[i];
        }
        
        // starting from end for right product
        // answer[i] *= right and right *= nums[i] (for next)
        for(int i = s - 1; i >= 0; i--){
            answer[i] *= right;
            right *= nums[i];
        }
        
        return answer;
    }
};