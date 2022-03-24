class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mini = INT_MAX;
        int n=nums.size();
        int sum;
        int diff;
        int x,y;
        int ans;
        sort(nums.begin(),nums.end());
        for(int k=0;k<n-1;k++){
            x = nums[k];
            int i = k+1;
            int j = n-1;
            
            while(i<j){
                sum = x + nums[i] + nums[j];
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