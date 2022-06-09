class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string res = "";
        
        for(char c : s){
            if(c != ']') st.push(c);
            else {
                string t = "";
                while(st.top() != '['){     
                    t += st.top();
                    st.pop();
                }
                st.pop();
                string num = "";
                while(!st.empty() && isdigit(st.top())){
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());      
                int times = stoi(num);  
                while(times != 0){
                    for(int i=t.length()-1; i>=0; i--){
                        st.push(t[i]);
                    }
                    times--;
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