class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> res;
        
        for(int i=0;i<strs.size();++i){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(m.find(s) == m.end()) m[s] = {};
            m[s].push_back(strs[i]);
        }
        for(auto i:m){
            res.push_back(i.second);
        }
        return res;        
    }
};


/*    O(N*M) - TC    

      Idea - Each group will have same hash vector

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <vector<int>,vector<string>> m;
        
        for(int i=0;i<strs.size();++i){
            vector<int> arr (26,0);
            for(int j=0;j<strs[i].length(); ++j){
                arr[strs[i][j] - 'a']++;
            }
            if(m.find(arr) == m.end()) m[arr] = {};
            m[arr].push_back(strs[i]);            
        }
        vector<vector<string>> res;
        for(auto i:m){
            res.push_back(i.second);
        }
        return res;
    }
    
*/