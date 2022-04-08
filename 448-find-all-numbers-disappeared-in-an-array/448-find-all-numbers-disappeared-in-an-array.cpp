class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      
        vector<int> arr;        
        for(int i=0; i<nums.size(); i++){
            if(nums[ abs(nums[i]) - 1 ] >= 0) {                
                nums[abs(nums[i])-1] = (-1)*nums[abs(nums[i])-1];
            }
        }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= 0) arr.push_back(i+1);
        }
        return arr;
        
    }
};


// O(N) Time  O(N) Space  

//     unordered_map <int, int> mapy;
//         for(int i=0; i<nums.size(); i++){
//             mapy[i+1] = 0; 
//         }
        
//         for(int i=0; i<nums.size(); i++){
//             mapy[nums[i]] = 1;
//         }
        
//         vector<int> arr;
        
//         auto it = mapy.begin();
        
//         while(it != mapy.end()){
//             if(it->second == 0) arr.push_back(it->first);
//             it++;
//         }
//         return arr;