class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int r = s.length()-1;
        
        while(s[r] == ' ') r--;
        
        int l = r;
        
        while(l >=0 && s[l] != ' ') {
            l--;
            ans++;
        }
        
        return ans;
                      
        }
        
       
    };
