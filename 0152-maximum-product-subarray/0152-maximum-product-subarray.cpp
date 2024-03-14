class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // using kadanes algorithm for reduces complexity
        
        int max_product = nums[0];
        int min_product = nums[0];
        int product = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            int temp = max(nums[i], nums[i]*max_product, nums[i]*min_product);
            min_product = min(nums[i], nums[i]*max_product, nums[i]*min_product);
            max_product = temp;
            product = max(max_product, product);
        }
        return product;
    }
    
    int max(int a, int b, int c = -999999){
        if(a >= b and a >= c)
            return a;
        else if (b >= a && b >= c)
            return b;
        else if (c >= a && c >= b)
            return c;
        else
            return 1;
    }
    
    int min(int a, int b, int c = 999999){
        if(a <= b && a <= c)
            return a;
        else if(b <= a && b <= c)
            return b;
        else if(c <= a && c <= b) 
            return c;
        else return 1;
    }
};