class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums2 ;
        
        for(int & x:nums) nums2.push_back(x);
        sort(nums2.begin(),nums2.end());
        
        int i=0, j = nums.size()-1;
        
        
        while( (nums[i] == nums2[i] || nums[j] == nums2[j]) && i<j){
            cout << nums[i] << " " << nums[j] ;
            
            if(nums[i] == nums2[i] && nums[j] == nums2[j]){
                i++; j--;
            }
            else if(nums[i] == nums2[i]){
                i++;
            }
            else if(nums[j] == nums2[j]){
                j--;
            }
        }
        if(i>=j) return 0;
        return j-i+1;
    }
};