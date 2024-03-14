class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0; i<n+1; i++){
            sum+=i;
        }
        for(int i=0; i<n; i++){
            sum-=nums[i];
        }
        return sum;
    }
};