// class Solution {
// public:
//     vector<int> partitionLabels(string s) {
//         int n = s.length();
//         unordered_map<char,int> m;
//         stack<int> st;
        
//         for(int i=0; i<n; i++){
//             if(m.find(s[i]) == m.end()){
//                 m[s[i]] = i;
//                 st.push(i);
//             }
//             else {
//                 int prev = m[s[i]];
//                 while(!st.empty() && st.top() >= prev) st.pop();
//                 st.push(i);
//             }
//         }
//         vector<int> res;
//         while(!st.empty()){
//             res.push_back(st.top());
//             st.pop();
//         }
//         res.push_back(-1);
//         for(int i=0; i<res.size()-1; i++) res[i] = res[i] - res[i+1];
//         res.pop_back();
//         reverse(res.begin(), res.end());
//         return res;
//     }
// };
class Solution {
public:
    vector<int> partitionLabels(string s) {
		// vector for keeping the track of  last occurence of every character
        vector<int> end_idx(26,0);
        
        for(int i = 0; i < s.length(); ++i)
            end_idx[s[i] - 'a']  = i;
        
        vector<int> res;
        
        int start = 0, end = 0;
		// scanning string character by character
        for(int i = 0; i < s.length(); ++i)
        {
		// whenever we get an character we check,
		// last index of that character
            end = max(end, end_idx[s[i] - 'a']);
            
			// when current i.e i == end
			// add it to result
            if( i == end)
            {
                // all the characters of current partition included
                res.push_back(i - start + 1);
				// update the start pointer for fresh start
                start = i + 1;
            }
        }
        
        return res;
    }
};