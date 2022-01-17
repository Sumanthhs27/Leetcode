class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;
        
        int lb=0, ub=nums.size()-1;
        int mid;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(target<nums[mid])
                ub=mid-1;
            else if(target>nums[mid])
                lb=mid+1;
            else
                return mid;
        }
        
        return -1;
    }
};