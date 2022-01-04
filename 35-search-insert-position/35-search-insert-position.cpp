class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid = (right + left)/2;
        int index; 
        
        while(left < right){
            if(nums[mid] > target){
                right = mid-1; 
                mid = (right + left)/2;
            }
            else if(nums[mid] < target){
                left = mid+1; 
                mid = (right + left)/2;
            }
            else if (nums[mid] == target){
                index = mid;
                return index;
            }
        }
        cout << mid << " ";
        if(target > nums[mid]) {
            index = mid + 1;
        }
        else if (target < nums[mid]) {
            index = mid ;
        }
        return index;
        
    }
    
};