class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res (nums.size(),1);
        for(int i=1; i<nums.size(); i++){
            res[i] = res[i-1]*nums[i-1];
        }
        int suffix_product = 1;
        for(int i=nums.size()-1; i>=0; i--){  
            res[i] = res[i]*suffix_product;
            suffix_product *= nums[i];
        }
        return res;
    }
};