class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int left = INT_MAX, mid = INT_MAX;
        for (auto n : nums)
            if (n <= left)         left = n;
            else if (n <= mid)     mid = n;
            else                   return true;
        
        return false;
    }
};


//    O(N^2) Solution (Doesn't pass one test case)
 
//     int n = nums.size(), curr, cnt, temp;
//         if(n < 3) return false;
        
//         for(int i=0; i<n-2; i++){
//             curr = nums[i];
//             temp = nums[i];
//             cnt = 0;
//             for(int j=i+1; j<n; j++){
//                 if(nums[j] > curr && nums[j] > temp){
//                     cnt++;
//                     temp = nums[j];
//                 }
//                 else if(nums[j] > curr && nums[j] < temp){
//                     temp = nums[j];
//                 }
//             }
//             if(cnt >= 2) return true;
//         }
//         return false;
