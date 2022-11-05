class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size(), res = 0;
        unordered_map<string,int> m;
        unordered_map<string,int> mp;
        
        for(string& s: words){
            if(s[0] == s[1]) mp[s]++;
            else{
                m[s]++;
            }
        }
        for(auto it : m){
            string s = it.first;
            string to_find = s;
            reverse(to_find.begin(),to_find.end());
            int freq = it.second;
            if(m.find(to_find) != m.end()){
                int to_add = min(freq,m[to_find]);
                m[s] -= to_add;
                m[to_find] -= to_add;
                res += 4*to_add;
            }
        }
        int odd = 0;
        for(auto it : mp){
            int freq = it.second;
            if(freq%2 == 0) res += 2*freq;
            else{
                res += 2*(freq-1);
                odd = 2;
            }
        }
        return res+odd;
    }
};