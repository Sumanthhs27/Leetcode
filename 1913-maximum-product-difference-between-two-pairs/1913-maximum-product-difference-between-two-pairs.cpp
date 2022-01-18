class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= max1){
                max2 = max1;
                max1 = nums[i];
            }
            else max2 = max(max2, nums[i]);
            if(nums[i] <= min1){
                min2 = min1;
                min1 = nums[i];
            }
            else min2 = min(min2, nums[i]);
        }
        return (max1*max2) - (min1*min2);
    }
};