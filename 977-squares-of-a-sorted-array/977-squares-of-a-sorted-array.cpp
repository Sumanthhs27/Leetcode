class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int index = nums.size()-1;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >=0) {
                index = i;
                break; 
            }
            else nums[i] = abs(nums[i]);
        }
        
        int i = index-1;
        int j = index;
        vector <int> ans;
        
        while(i >=0 && j < nums.size()){
            if(nums[j] <= nums[i]){
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
        }
        
        while(i>=0){
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<nums.size()){
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        
        return ans;
        
    }
};