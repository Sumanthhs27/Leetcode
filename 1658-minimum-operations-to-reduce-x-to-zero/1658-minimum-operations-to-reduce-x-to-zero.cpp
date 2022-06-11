// class Solution {
// public:
//     int minOperations(vector<int>& nums, int x) {
//         int n = nums.size();
//         int sum = 0;
//         int target = accumulate(nums.begin(),nums.end(),0) - x;
//         int i=0,j=0;
//         int len=0, max_len = 0;
        
        
//         while(j<n){
//             sum += nums[j];
//             if(nums[j] == target) return n-1;
//             if(sum == target) {
//                 max_len = max(max_len,len);
//                 i++;
//                 j++;
//                 len = 0;
//                 sum = 0;
//             }
//             else if(sum < target){
//                 j++;
//                 len++;               
//             }
//             else {
//                 while(sum > target){
//                     sum -= nums[i++];
//                     len--;
//                 }
//                 j++;
//             }
//         }
        
//         return (max_len > 0) ? (n-max_len) : -1;
//     }
// };


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0, n=nums.size();
        for(auto i:nums) total+=i;
        if(x>total) return -1;
        int left=0,right=0, curr=0, ans=-1;
        for(; right<n;right++){
            curr+=nums[right];
            while(curr>total-x&&left<=right){
                curr-=nums[left];
                left++;
            }
            if(curr==total-x) ans=max(ans, right-left+1);
        }
        if(ans==-1) return ans;
        return n-ans;
                
    }
};