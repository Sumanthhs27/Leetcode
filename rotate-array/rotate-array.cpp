class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int last;
        int n = nums.size();
        k = k%n;
        // for(int i=0; i<k; i++){
        //     last = nums[n-1];
        //     for(int j=n-1; j>0; j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = last;
        // }
        int arr[n];
        int index = k;
        for(int i=0; i<n; i++){
            if(index < n) arr[index++] = nums[i];
            else {
                index = index%n;
                arr[index++] = nums[i];                
            }
        }
        for(int i=0; i<n; i++){
            nums[i] = arr[i];
        }
    }
};