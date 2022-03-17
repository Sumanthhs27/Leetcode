class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        
        int l=0, r=nums.size()-1;
        int mid;
        if(r+1 == 0) return res;
        
        while(l<r){
            mid = (l+r)/2;
            
            if(nums[mid] == target){
                if(mid==l) {
                    res[0] = mid;
                    break;
                }
                else if(nums[mid-1] < nums[mid]){
                    res[0] = mid;
                    break;
                }
                else if(nums[mid-1] == nums[mid]) r=mid;
            }
            else if(nums[mid] > target) r=mid;
            else l = mid+1;
        }
        if(nums[l] == target) res[0] = l;
        
        
        
        l=0; r = nums.size()-1;
        
        while(l<r){
            mid = (l+r)/2;
            
            if(nums[mid] == target){
                // if(mid==l) {
                //     res[1] = mid;
                //     break;
                // }
                if(nums[mid+1] > nums[mid]){
                    res[1] = mid;
                    break;
                }
                else if(nums[mid+1] == nums[mid]) l=mid+1;
            }
            else if(nums[mid] > target) r=mid;
            else l = mid+1;
        }
        if(nums[r] == target) res[1] = l;
        
        
        
        
        
        return res;
    }
};