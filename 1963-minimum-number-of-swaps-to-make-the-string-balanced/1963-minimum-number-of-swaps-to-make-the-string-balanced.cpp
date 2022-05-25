class Solution {
public:
    int minSwaps(string s) {
        stack <char> st;
        
        for(char& x : s){
            if(st.empty()) st.push(x);
            else {
                if(x == '[') st.push(x);
                else{
                    if(st.top() == '['){
                        st.pop();
                    }
                    else st.push(x);
                }
            }
        }
        int n = st.size()/2;
        return (n+1)/2;
    }
};