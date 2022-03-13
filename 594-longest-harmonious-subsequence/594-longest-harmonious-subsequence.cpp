class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }       
        sort(nums.begin(),nums.end());
        
        int maxi = 0;
        int length = 0;
        
        for(int i=0; i<nums.size()-1; i++){
            if((nums[i+1]-nums[i]) == 1) {
                length = freq[nums[i]] + freq[nums[i+1]];
                maxi = max(maxi,length);
            }
        }              
        return maxi;
    }
};