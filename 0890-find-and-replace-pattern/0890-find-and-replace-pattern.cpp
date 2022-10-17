class Solution {
public:
    
    string pattern(string& word){
        int cnt = 1; 
        string res = "";
        unordered_map<char,int> m;
        for(char c : word){
            if(m.find(c) == m.end()){
                res += to_string(cnt);
                res += ' ';
                m[c] = cnt;
                cnt++;
            }
            else {
                res += to_string(m[c]);
                res += ' ';
            }
        }
        return res;        
    }
    
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string s) {
        vector<string> res;
        int n = s.length();
        string to_match = pattern(s);
        cout << to_match <<  " " ;
        
        for(string word : words){
            string curr = pattern(word);
            cout << curr << endl;
            if(curr == to_match) res.push_back(word);
        }
        
        return res;           
    }
};