class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      unordered_map <int, int> mapy;
        for(int i=0; i<nums.size(); i++){
            mapy[i+1] = 0; 
        }
        
        for(int i=0; i<nums.size(); i++){
            mapy[nums[i]] = 1;
        }
        
        vector<int> arr;
        
        auto it = mapy.begin();
        
        while(it != mapy.end()){
            if(it->second == 0) arr.push_back(it->first);
            it++;
        }
        return arr;
    }
};