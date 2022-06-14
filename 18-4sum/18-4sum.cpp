class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if(n<4) return res;
        sort(nums.begin(),nums.end());
        int sum = 0;
        
        for(int i=0; i<n; ++i){
            if(i != 0){
                if(nums[i] == nums[i-1]) continue;
            }
            for(int j=i+1; j<n-1; ++j){
                if(j != i+1){
                    if(nums[j] == nums[j-1]) continue;
                }
                sum = nums[i] + nums[j];
                int temp = target - sum;
                int l = j+1, r = n-1;
                
                while(l<r){
                    if(nums[l] + nums[r] == temp){
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[l++]);
                        ans.push_back(nums[r--]);
                        res.push_back(ans);
                        while(l<n && nums[l] == nums[l-1]) l++;
                        while(r>=0 && nums[r] == nums[r+1]) r--;
                    }
                    else if(nums[l] + nums[r] > temp){r--;}
                    else l++;
                }
            }
        }
        return res;
    }
};