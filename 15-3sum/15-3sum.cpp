class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> arr;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            else {
                int l = i+1, r = n-1, find = 0 - nums[i];
            
                while(l<r){
                    if(nums[l] + nums[r] == find){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        arr.push_back(temp);
                        l++; r--;
                        while(l<r && (nums[l] == nums[l-1]))l++;
                        while(l<r && (nums[r] == nums[r+1]))r--;
                    
                    }
                    else if(nums[l] + nums[r] < find) l++;
                    else r--;
                }
            }        
        }
                
        return arr;      
    }
};

/* Sort ---> Fix one number --> 2 pointers to find 2 sum --> move i, l & r untill they are not equal to previous number */
