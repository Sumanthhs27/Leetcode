class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count = 0;
        bool flg = true;
        int prev = nums[0];
        int sec_prev = INT_MIN;
        
        for(int i=0; i<nums.size()-1; i++){
           if(prev < nums[i+1]){
               sec_prev = prev;
               prev = nums[i+1];
               continue;
           }
            else if(count < 1 && prev >= nums[i+1]){
                count++;
                if(sec_prev < nums[i+1]){
                    prev = nums[i+1];
                }
                else if(sec_prev >= nums[i+1]){
                    
                }
            }
            else if(count >= 1 && prev >= nums[i+1]){
                flg = false;
            }
        }
        return flg;
    }
};