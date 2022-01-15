class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
   if(strs.size() == 1) 
        return strs[0];
// assign ans with the shortest string in strs
        string ans = strs[0]; 
        for(auto ptr1 : strs)
        {
            if(ptr1.size()<ans.size())
                ans = ptr1;
        }
		
        if(ans.size() == 0)
            return ans;
// compare ans with all the strings in strs and update ans with common prefix  using the 'substr' function of string
        for(int i=0; i<strs.size(); i++)
        {
            int m = min(strs[i].size(),ans.size()); 
            for(int j =0; j<m; j++)
            {
                if(strs[i][j] != ans[j])
                    ans = ans.substr(0,j);
            }
        }
        return ans;
    }
};