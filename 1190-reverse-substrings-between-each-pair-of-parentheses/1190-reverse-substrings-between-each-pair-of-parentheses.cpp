class Solution {
public:
    string reverseParentheses(string s) {
        stack <char> st;
        string res = "";
        
        for(char& x : s){
            if(st.empty()) st.push(x);
            else{
                if(x != ')') st.push(x);
                else{
                    while(!st.empty() && st.top() != '('){
                        res += st.top();
                        st.pop();
                    }
                    st.pop();
                    for(char& y : res){
                        st.push(y);
                    }
                    res = "";
                }
            }
        }
        
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;        
    }
};