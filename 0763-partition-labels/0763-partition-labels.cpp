class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        unordered_map<char,int> m;
        stack<int> st;
        
        for(int i=0; i<n; i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = i;
                st.push(i);
            }
            else {
                int prev = m[s[i]];
                while(!st.empty() && st.top() >= prev) st.pop();
                st.push(i);
            }
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        res.push_back(-1);
        for(int i=0; i<res.size()-1; i++) res[i] = res[i] - res[i+1];
        res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }
};