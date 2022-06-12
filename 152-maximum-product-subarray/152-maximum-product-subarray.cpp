class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1;
        int maxi = INT_MIN;
        
        for(int i=0;i<nums.size();++i){
            product *= nums[i];
            maxi = max(maxi,product);
            if(product == 0) product = 1;
        }
        
        cout << maxi << " ";
        product = 1;
        
        for(int i=nums.size()-1;i>-1;--i){
            product *= nums[i];
            maxi = max(maxi,product);
            if(product == 0) product = 1;
        }
        
        cout << maxi << " ";
        
        return maxi;
    }
};