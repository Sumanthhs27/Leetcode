class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j;
        if(n == 0) return 0;
        else if(n == 1) return 1;
        else j = 1;
        
        for(int i=1; i<n; i++) {
            if(nums[i]>nums[j-1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
        
        
    }
};