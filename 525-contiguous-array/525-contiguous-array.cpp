class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       
        unordered_map<int,int> mp; mp[0]=-1;
        int sum = 0,longest_subarray = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i] == 0 ? - 1 : 1;    
            if(mp.find(sum) != mp.end())
            {
                if(longest_subarray < i - mp[sum])
                {
                    longest_subarray = i - mp[sum];
                }
            }
            else
            {
                mp[sum] = i;
            }
        }
        return longest_subarray;
        
        
        
//         int len = 0, maxi = 0, prefix = 0;
//         for(int i=0; i<nums.size();++i) if(nums[i] == 0) nums[i] = -1;
//         unordered_map<int,int> m;
        
//         for(int i=0; i<nums.size(); ++i){
//             prefix += nums[i];
//             if(prefix == 0){
//                 len = i+1;
//                 maxi = max(len,maxi);
//             }
//             else {
//                 if(m.find(prefix) == m.end()) m[prefix]  = i;
//                 else {
//                     len = i-m[prefix];
//                     maxi = max(maxi,len);
//                 }
//             }
//         }
//         return maxi;               
    }
};