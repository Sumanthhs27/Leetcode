class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=n-1; i>0; i--){
            if(nums[i] < nums[i-1]){
                if(i==n-1) cnt++;
                else if(nums[i-1] > nums[i+1]){
                    nums[i-1] = nums[i];
                    cnt++;
                }
                else cnt++;
            }
            if(cnt>1) return false;
        }
        return true;
    }
};