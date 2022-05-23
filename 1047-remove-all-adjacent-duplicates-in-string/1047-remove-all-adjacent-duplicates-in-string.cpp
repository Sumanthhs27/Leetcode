class Solution {
public:
    string removeDuplicates(string s) {
        
        string res = "";
        for (char& c : s)
            if (res.size() && c == res.back())
                res.pop_back();
            else
                res.push_back(c);
        return res;        
    }
};

// stack<char> st;
        
//         for(char x:s){
//             if(!st.empty()){
//                 if(st.top() == x) st.pop();
//                 else st.push(x);
//             }
//             else st.push(x);
//         }
        
//         string res = "";
        
//         while(!st.empty()){
//             res += st.top();
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
//         return res;

