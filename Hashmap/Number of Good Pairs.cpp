class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        
        for(int i = 0; i<nums.size(); i++){
            if(map.count(nums[i]) == 0){
                map[nums[i]] = 1;
            }
            else{
                map[nums[i]] += 1;
            }
        }
        int result = 0;
        auto it = map.begin();
        auto it1 = map.end();
        while(it != it1){
            if(it->second == 2){
                result += 1;
            }
            else if(it->second >2){
                int x = it->second;
                result += (x*(x-1))/2;
            }
            it++;
        }
        return result;
        
    }
};
