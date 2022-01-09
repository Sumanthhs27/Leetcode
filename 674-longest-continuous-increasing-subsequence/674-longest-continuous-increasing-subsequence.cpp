class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int max_count = 1;
        if(n == 1) return count;
        for(int i=0; i<n-1 ; i++){
            if(nums[i] < nums[i+1]){
                count++;
                max_count = max(count, max_count);
            }
            else {
                count = 1;
            }
        }
        return max_count;
    }
};