class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[nums.size()];
        for(int i=0; i<nums.size(); i++){
            arr[i] = 0;
        }
        int flg;
        for(int i=0; i<nums.size(); i++){
            if(arr[nums[i]] == 0) arr[nums[i]]++;
            else flg = nums[i];
        }
        return flg;
    }
};