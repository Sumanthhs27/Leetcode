class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int len = 0, maxi = 0, prefix = 0;
        for(int i=0; i<nums.size();++i) if(nums[i] == 0) nums[i] = -1;
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size(); ++i){
            prefix += nums[i];
            if(prefix == 0){
                len = i+1;
                maxi = max(len,maxi);
            }
            else {
                if(m.find(prefix) == m.end()) m[prefix]  = i;
                else {
                    len = i-m[prefix];
                    maxi = max(maxi,len);
                }
            }
        }
        return maxi;               
    }
};