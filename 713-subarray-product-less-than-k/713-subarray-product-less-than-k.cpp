class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(), p = 1, i=0,j=0,cnt = 0;
        if(!k || k==1) return 0;
        while(j<n){
            p *= nums[j];
            
            while(p >= k) p /= nums[i++];
            cnt += j-i+1;
            j++;
        }
        return cnt;           
    }
};