class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int sum =0,maxi=0;
        int i=0, j=0;
        
        while(j<nums.size()){
            if(m.find(nums[j]) == m.end()){
                m[nums[j]] = j;
                sum += nums[j++];
                maxi = max(maxi,sum);
            }
            else{
                int t = m[nums[j]];
                while(i<=t){
                    m.erase(nums[i]);
                    sum -= nums[i];
                    i++;
                }
            }
        }
        return maxi;
    }
};