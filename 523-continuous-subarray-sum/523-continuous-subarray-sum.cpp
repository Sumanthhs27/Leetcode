class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), sum=0;
        unordered_map<int,int> rop; // remainderOfPrefix
        rop[0] = -1;
        for(int i=0; i<n; ++i){
            sum += nums[i];
            int remainder = sum%k;
            if(rop.find(remainder) != rop.end()){
                int prevIndex = rop[remainder];
                if(i-prevIndex > 1) return true;
            }
            else rop[remainder] = i;
        }
        return false;
    }
};