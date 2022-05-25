class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt = 0;
        int maxi = 0;
        map<char,int> m;
        
        int i=0, j=0;
        
        while(j<s.length()){
            if(m.find(s[j]) == m.end()){
                m[s[j++]] = j;
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                i = m[s[j]] + 1;
                j = i;
                m.clear();
                cnt = 0;
            }
        }
        return maxi;
    }
};