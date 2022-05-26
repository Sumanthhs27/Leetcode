class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        vector<int> ans;
        
        for(int& x : asteroids){
            if(x > 0) st.push(x);
            else{
                if(st.empty() || st.top() < 0) st.push(x);
                else{
                    if(st.top() > abs(x)) continue;
                    else if(st.top() == abs(x)) {
                        st.pop();
                        continue;
                    }
                    else{
                        while(!st.empty() && st.top()<abs(x) && st.top()>0){
                            st.pop();
                        }
                        if(st.empty() || st.top()<0) st.push(x);
                        if(st.top() == abs(x)) st.pop();
                    }
                }
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());   
        return ans;
    }
};