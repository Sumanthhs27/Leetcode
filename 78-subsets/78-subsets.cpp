class Solution {
public:
    vector<vector<int>> res;
    
    void subsequences(int i, int N, vector<int>& arr, vector<int>& nums){
        
        if(i>=N){
            res.push_back(arr);
            return;
        }
        arr.push_back(nums[i]);
        subsequences(i+1,N,arr,nums);
        arr.pop_back();
        subsequences(i+1,N,arr,nums);
        
    }
  
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr = {};
        subsequences(0,nums.size(),arr,nums);
        return res;
    }
};