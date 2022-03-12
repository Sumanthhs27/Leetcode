class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int i=0, j=2;
        int count = 0;
        
        while(j<n){
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) count++;
            i++;
            j++;
        }
        return count;
    }
};