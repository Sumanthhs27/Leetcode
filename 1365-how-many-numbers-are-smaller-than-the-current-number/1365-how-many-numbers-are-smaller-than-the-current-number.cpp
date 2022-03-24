class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy = nums;
        sort(nums.begin(),nums.end());
        vector<int> ans = {};
        map<int,int> mp = {};
        
        for(int i=nums.size()-1; i>=0; i--){
            mp[nums[i]] = i;
        }
        
        for(int j=0; j<nums.size();j++){
            ans.push_back(mp[copy[j]]);
        }        
        return ans;
    }
};


