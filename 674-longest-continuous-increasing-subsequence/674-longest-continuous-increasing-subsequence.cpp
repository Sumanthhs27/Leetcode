class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int count = 1;
        int max_count = 1;
        if(nums.size() == 1) return count;
        for(int i=0; i<nums.size()-1 ; i++){
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