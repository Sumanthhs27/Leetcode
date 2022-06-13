class Solution {
public:
    int minSteps(string s, string t) {
        int s1[26] = {0}, t1[26] = {0};
        
        for(int i=0;i<s.length();++i){
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }
        
        int count = 0;
        for(int i=0;i<26;++i){
            if(s1[i]>t1[i]) count += s1[i]-t1[i];
        }
        return count;
    }
};