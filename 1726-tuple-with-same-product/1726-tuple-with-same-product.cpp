class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size(), cnt =0;
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                int product = nums[i]*nums[j];
                cnt += 8 * m[product];
                m[product]++;
            }
        }
        return cnt;        
    }
};