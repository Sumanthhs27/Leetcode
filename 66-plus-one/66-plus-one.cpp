class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int borrow = 1;
        int sum = 0;
        
        vector<int> res;
        for(int i=digits.size()-1; i>=0; i--){
            sum = borrow + digits[i];
            borrow = sum/10;
            sum = sum%10;
            res.push_back(sum);
        }
        if(borrow == 1) res.push_back(1);
        reverse(res.begin(),res.end());
        return res;
    }
};