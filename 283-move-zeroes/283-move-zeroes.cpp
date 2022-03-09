class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n = nums.size();
        int j = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j++]);
                count++;
            }
        }
        for(int x=j; x<n; x++){
            nums[x] = 0;
         }
    }
};