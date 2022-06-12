class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) {return (nums[0]==k) ? 1 : 0; }
       
        int cnt = 0;
        unordered_map<int,int> m;
        m[0]++;
        int prefix = 0;
        
        for(int i : nums){
            prefix += i;
            if(m.find((prefix-k)) != m.end()) cnt += m[prefix-k];
            m[prefix]++;
        }
        return cnt;
    }
};