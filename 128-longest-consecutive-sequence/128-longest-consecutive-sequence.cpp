class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int count = 1;
        if(nums.size() == 0) return 0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] = 0;
        }
        
        for(int i=0; i<nums.size(); i++){
            int ele = nums[i];
            int b = 1;
            
            if(m[ele] == 0){
                while(m.find(ele-1) != m.end()){
                    b++;
                    m[ele-1] = 1;
                    ele -= 1;            
                }            
                count = max(count, b);
            }
                      
        }        
        return count;
    }
};