class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res;
        
        for(int i=temperatures.size()-1; i>=0; i--){
            if(st.empty()){
                st.push(i);
                res.push_back(0);
            }    
            else{
                if(temperatures[i] < temperatures[st.top()]){
                    res.push_back(st.top()-i);
                    st.push(i);
                }
                else{
                    while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                        st.pop();
                    }
                    if(st.empty()) res.push_back(0);
                    else{
                        res.push_back(st.top()-i);                       
                    }
                    st.push(i);
                }
            } 
        }
        reverse(res.begin(),res.end());
        return res;               
    }
};