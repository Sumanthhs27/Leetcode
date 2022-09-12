class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> m;
        int n = s.length(), cnt = 1;
        for(char c : s){
            if(m.find(c) != m.end()){
                cnt++;
                m.clear();
                m[c]++;
            }
            else m[c]++;
        }
        return cnt;
        
    }
};