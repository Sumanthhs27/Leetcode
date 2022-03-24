class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mini = INT_MAX;
        int sum, diff, ans;        
        sort(nums.begin(),nums.end());
        
        for(int k=0;k<nums.size()-1;k++){
            int i = k+1;
            int j = nums.size()-1;   
            while(i<j){
                sum = nums[k] + nums[i] + nums[j];
                diff = abs(sum-target);
                if(diff < mini) {
                    mini = diff;
                    ans = sum;
                }
                if(sum == target){return sum;}
                else if(sum > target) j--;
                else if(sum < target) i++;
            }
            
        }
        return ans;
    }
};