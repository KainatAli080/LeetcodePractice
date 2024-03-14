class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // array 2 empty, no merging required
        if(n==0)
            return;
        
        // array 1 has no digits of its own
        if(m+n==n) {
            for(int i=0; i<n; i++) 
                nums1[i] = nums2[i];
            return;
        }
        
        int merged_arr_end = (m+n)-1;
        int arr1_end = m-1;
        int arr2_end = n-1;
        // inserting digits from end
        while(arr1_end >= 0 && arr2_end >=0){
            if(nums1[arr1_end] < nums2[arr2_end]) {
                nums1[merged_arr_end] = nums2[arr2_end];
                arr2_end--;
                merged_arr_end--;
            }
            else {
                nums1[merged_arr_end] = nums1[arr1_end]; 
                arr1_end--;
                merged_arr_end--;
                if(arr1_end == -1 && nums1[merged_arr_end]>nums2[arr2_end])
                    nums1[merged_arr_end] = nums2[arr2_end];                
            }
        }
        
        while(arr2_end >= 0)
        {
            nums1[merged_arr_end] = nums2[arr2_end];
            arr2_end--;
            merged_arr_end--;
        }
    }
};