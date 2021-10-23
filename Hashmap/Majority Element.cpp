class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = (nums.size())/2;
        unordered_map <int,int> map;
        for(auto i : nums){
            if(map.count(i) == 0) map[i] = 1;
            else {
                map[i] += 1;
            }
        }
        auto it = map.begin();
        auto it1 = map.end();
        int x = 0;
        while(it != it1){
            if(it->second > n) x = it->first;
            it++;
        }
        return x;                                 
    }
};
