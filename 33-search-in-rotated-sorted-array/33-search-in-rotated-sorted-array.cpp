class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int n =h;
        int l =0;
        while(l<=h){
            int mid =l+ ((h-l)>>1);
            if (nums[mid]==target) return mid;
            if(nums[0]<=nums[mid]){ //left
                if(target >=nums[0] && target < nums[mid]) h= mid-1;
                else l= mid+1;
                
            }
            else { //right
                if(target<=nums[n] && target >nums[mid]) l = mid+1;
                else h = mid-1;
            }
        }
        return -1;
    //     int n = nums.size();
    //     int low = 0; 
    //     int high = n-1;
    //     int mid;
    //     int flg = -1;
    //     if(n == 1){
    //         if(nums[0] == target) return 0;
    //         else return -1;
    //     }
    //     while(low < high ){
    //         mid = (low+high)/2;
    //         if(mid >= 0 && nums[mid] == target){
    //             flg = mid;
    //             break;
    //         }
    //         else if(nums[mid] > nums[high]){
    //             if(target > nums[high]){
    //                 if(target < nums[mid]){
    //                     high = mid;
    //                 }
    //                 else low = mid;
    //             }
    //             else low = mid;
    //         }
    //         else if(nums[mid] < nums[high]) {
    //             if(target > nums[high]){
    //                 low = mid;
    //             }
    //             else {
    //                 high = mid;
    //             }
    //         }
    //     }
    //     return flg;
     }
};