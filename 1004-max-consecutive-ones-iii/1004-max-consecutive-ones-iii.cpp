class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int count = 0;
        int maxL = 0;
        int i=0, j=0;
        
        while(j<nums.size()){
            if(nums[j] == 1){
                j++;
                maxL = max(maxL,j-i);
            }
            
            else if(nums[j] == 0){ 
                if(count >= k){
                    while(count >= k){
                        if(nums[i] == 0) count--;
                        i++;
                    }
                }
                else if(count < k){
                    j++;
                    count++;
                    maxL = max(maxL,j-i);
                }
            }
        }
        
        return maxL;        
    }
};