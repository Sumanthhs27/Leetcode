class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        int count = 0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == s[i+1]) {
                count += 2;
                i += 1;
            }
        }
        return (count == s.length()) ? count : count+1;
    }
};