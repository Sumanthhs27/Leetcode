class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(nums.size()==1)
            return false;
        if(nums.size()==2)
            if(nums[0]==nums[1])
                return true;
            else
                return false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                return true;
        return false; 
        
    }
};