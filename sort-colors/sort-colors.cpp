class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;
        int one = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 0) z++;
            else if(nums[i] == 1) one++;
        }
        int j = 0;
        while( j < n ){
            if(j < z){nums[j] = 0;}
            else if(j >= z && j < z+one){nums[j] = 1;}
            else nums[j] = 2;
            j++;
        }
        
    }
};