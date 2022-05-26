class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,int> m;
        for(char & c:s) m[c]++;
        
        for(int i=0; i<s.length(); i++){
            if(m[s[i]] == 1) return i;
        }
        return -1;        
    }
};