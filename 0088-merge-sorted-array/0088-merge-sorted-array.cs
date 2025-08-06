public class Solution {
    public void Merge(int[] arr1, int m, int[] arr2, int n) {
        // Handling edge cases first
        // Edge 1: arr1 empty
        if(m == 0){
            for (int idx = 0; idx < n; idx++){
                arr1[idx] = arr2[idx];
            }
            return;
        }

        // Edge 2: arr2 empty
        if (n == 0){
            return;
        }

        // Starting from the end because we won't overwrite anything important. 
        // if we merge from the start, we'll be inserting the in the existing values of arr1
        // potentially causing problems, and increasing time complexity (O of n2)
        // starting from the end means to shifting and def no overwriting
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        // in i, we have the final actual value index of arr1
        // in j, we have the final value index of arr2
        // in k, we have the overall arr11 final val index
        while (j >= 0){
            if(i >= 0 && arr1[i] > arr2[j]){
                arr1[k] = arr1[i];
                i--;
            }
            else{ 
                arr1[k] = arr2[j];
                j--;
            }
            k--;
        }

    }
}