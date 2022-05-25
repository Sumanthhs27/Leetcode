class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack <int> st;
        vector<int> res;
        
        for(int i=prices.size()-1; i>=0; i--){
            if(st.empty()) {
                st.push(prices[i]);
                res.push_back(prices[i]);
            }
            else{
                while(!st.empty()){
                    if(st.top() <= prices[i]){
                        res.push_back(prices[i]-st.top());
                        break;
                    }
                    else {
                        st.pop();
                    }
                }
                if(st.empty()) res.push_back(prices[i]);
                st.push(prices[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};