class Solution {
public:
    
    void helper(int i,vector<string>& p,string& s,vector<vector<string>>& res){
        string to_search = s.substr(0,i+1);
        cout << to_search << " " ;
        vector<string> ans;
        
        for(string words : p){
            string prefix = words.substr(0,i+1);
            if(prefix == to_search && ans.size()<3) ans.push_back(words);
        }
        res.push_back(ans);
    }
    
    
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        vector<vector<string>> res;
        sort(p.begin(),p.end());
        int m = s.length();
        
        for(int i=0; i<m; i++){
            helper(i,p,s,res);
        }
        return res;
    }
};