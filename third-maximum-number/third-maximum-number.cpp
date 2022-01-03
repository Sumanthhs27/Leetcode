class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;  
        bool flag = false;

        for(int i=0; i<n; ++i) {  
            if(first<nums[i]) {
                third = second;
                second = first;
                first = nums[i];
            }
            else if(first>nums[i] and second<nums[i]) {
                third = second;
                second = nums[i];
            }
            else if(second>nums[i] and third<nums[i]) {
                third = nums[i];
            }
            
            if(nums[i]==INT_MIN)
                flag = true;
        }
        
        if(flag) {
            if(first!=second and second!=third) {
                return third;
            }
            return first;
        }        
        if(third==INT_MIN)
            return first;
        return third;        
    }
};