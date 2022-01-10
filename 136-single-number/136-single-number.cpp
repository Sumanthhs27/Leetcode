class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int fac=0;
        for(int i=0;i<nums.size();i++){
            fac=fac^nums[i];
        }
        return fac;
    }
};