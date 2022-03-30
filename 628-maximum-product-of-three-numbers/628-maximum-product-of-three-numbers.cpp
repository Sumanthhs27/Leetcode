class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        if (nums[n-1] >= 0) {
            if(nums[1] < 0) {
                return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);                
            }
        }
       return nums[n-1]*nums[n-2]*nums[n-3];
    }
};