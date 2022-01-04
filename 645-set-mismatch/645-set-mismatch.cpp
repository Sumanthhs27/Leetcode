class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> ans; 
        int n = nums.size();
        int arr[n+1];
        for(int i=0; i<n+1; i++){
            arr[i] = 0;
        }
        
        for(int i=0; i<n; i++){
            if(arr[nums[i]] <1){
                arr[nums[i]]++;
            }
            else {
                ans.push_back(nums[i]);
            }
        }
        for(int i=1; i<n+1; i++){
            if(arr[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};