class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        
 //     Prefix Sum method             Can be done by sliding window also

        int sum = 0;
        int maxi = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            sum = max(sum,nums[i]);
            maxi = max(maxi,sum);
        }
        return maxi;
      
    }
};