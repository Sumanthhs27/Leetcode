class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l=0, r=n-1;
        
        while(l<r){
            int mid = (l+r)/2;
            
            if(l==mid) return min(nums[mid],nums[r]);
            else if(nums[mid-1] > nums[mid]) return nums[mid];
            else if(nums[mid] > nums[l]){
                if(nums[r] > nums[l]) return nums[l];
                else {
                    l = mid+1;
                }
            }
            else {
                if(nums[mid-1] < nums[mid]) r = mid-1;
            }
        }
        return nums[l];
        
    }
};