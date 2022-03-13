class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        int count = 0;
        int maxi = 0;
        bool flag = true;
        while(j<nums.size()){
            if(nums[j] == 1) {
                j++;
                maxi = max(maxi,j-i-count) ;
            }
            else{
                flag = false;
                count++;
                if(count <= 1) j++;
                else{
                    while(count>1){
                        if(nums[i] == 0) count--;
                        i++;
                    }
                    j++;
                }
            }
        }
        
        return flag ? maxi-1 : maxi;
   
        
        
    }
};