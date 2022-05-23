class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack <char> st;
        stack <char> st1;
        for(char x: s){
            if(x != '#') st.push(x);
            else {
                if(!st.empty()) st.pop();
            }
        }
        for(char x: t){
            if(x != '#') st1.push(x);
            else {
                if(!st1.empty()) st1.pop();
            }
        }
        
        return st == st1;
    }
};