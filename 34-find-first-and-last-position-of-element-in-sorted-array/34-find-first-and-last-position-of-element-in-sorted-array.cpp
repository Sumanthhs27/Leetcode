class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> res = {-1,-1};
        
//         int l=0, r=nums.size()-1;
//         int mid;
//         if(r+1 == 0) return res;
//         if(nums.size() == 1 && nums[0]==target) return {0,0};
        
//         while(l<r){
//             mid = (l+r)/2;
            
//             if(nums[mid] > target) r=mid;
//             else if (nums[mid] < target) l = mid+1;
//             else{
//                 if(nums[l] < target) l++;
//                 if(nums[r] > target) r--;
//                 if(nums[l] == target && nums[r] == target) {res[0]=l; res[1]=r; break;}
//             } 
//         }
//         return res;
        
        int left=0, right=nums.size()-1, flag=0;
        
        if(nums.size() == 1 && nums[0]==target) return {0,0};
        
        while(left < right) {
            int mid = left + (right-left)/2;
            
            if(nums[mid] < target)  left=mid+1; //left part is discarded
            
            else if(nums[mid] > target) right=mid;  //right part is discarded
            
            else if(nums[mid] == target) {  //if target found, move the end points
                if(nums[right] > target)  right--;
                if(nums[left] < target) left++;
                if(nums[left]==target && nums[right]==target)   {flag=1;break;}
            }
            if(left == right && nums[left]==target) {flag=1;break;}  //if range is 1
        }
        if(flag==1)  return {left, right};
        return {-1,-1};
    }
};


//         vector<int> res = {-1,-1};
        
//         int l=0, r=nums.size()-1;
//         int mid;
//         if(r+1 == 0) return res;
        
//         while(l<r){
//             mid = (l+r)/2;
            
//             if(nums[mid] == target){
//                 if(mid==l) {
//                     res[0] = mid;
//                     break;
//                 }
//                 else if(nums[mid-1] < nums[mid]){
//                     res[0] = mid;
//                     break;
//                 }
//                 else if(nums[mid-1] == nums[mid]) r=mid;
//             }
//             else if(nums[mid] > target) r=mid;
//             else l = mid+1;
//         }
//         if(nums[l] == target) res[0] = l;
               
//         l=0; r = nums.size()-1;
        
//         while(l<r){
//             mid = (l+r)/2;
            
//             if(nums[mid] == target){
//                 if(nums[mid+1] > nums[mid]){
//                     res[1] = mid;
//                     break;
//                 }
//                 else if(nums[mid+1] == nums[mid]) l=mid+1;
//             }
//             else if(nums[mid] > target) r=mid;
//             else l = mid+1;
//         }
//         if(nums[r] == target) res[1] = l;

//         return res;