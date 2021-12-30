class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = prices[0];
        int diff = 0;
        for(int i=0; i<prices.size()-1; i++){
            int sub = prices[i+1] - left; 
            if(sub <= 0){
                left = prices[i+1];
            }
            else{
                diff += sub;
                left = prices[i+1];             
            }
        }
        return diff;
    }
};