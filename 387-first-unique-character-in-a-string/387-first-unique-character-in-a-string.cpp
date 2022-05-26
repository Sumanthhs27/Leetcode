class Solution {
public:
    int firstUniqChar(string s) {
       
        map<char,int> m;
        
        for(int i=0; i<s.length(); i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = i;
            }
            else m[s[i]] = INT_MAX;
        }
        
        int mini = INT_MAX;
        for(auto it:m){
            mini = min(mini,it.second);
        }
        return (mini == INT_MAX) ? -1 : mini;
        
            
    }
};

//         map<char,int> m;
//         for(char & c:s) m[c]++;
        
//         for(int i=0; i<s.length(); i++){
//             if(m[s[i]] == 1) return i;
//         }
//         return -1;    