class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        if(m < n) return false;
        if(s == t) return true;
        
        int i=0; 
        int j=0;
        
        while(i < n && j < m){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else j++;
            
        }
        return i == n;
    }
};