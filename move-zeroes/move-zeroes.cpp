class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if (nums[i] == 0) zeros++;
        }
        
        int index = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                nums[index] = nums[i];
                index++;
            }
        }
        for(int j = n-1; j> n-1-zeros; j--){
            nums[j] = 0;
        }
        
        for(int x =0; x<n; x++){
            cout << nums[x] << " ";
        }
    }
};