class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int target = n/2;
        map<int,int> m;
        
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        
        auto it = m.begin();
        
        while(it != m.end()){
            if(it->second > target) return it->first;
            it++;
        }
        return 0;
    }
};