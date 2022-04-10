class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> arr;
        
        for(int i=0; i<nums.size(); i++){
            int num = target - nums[i];
            
            if(m.find(num) != m.end()){
                auto it = m.find(num);               
                arr.push_back(it->second);
                arr.push_back(i);
                break;
            }
            else m[nums[i]] = i;
        }        
        return arr;
    }
};