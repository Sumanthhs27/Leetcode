class Solution {
public:
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
};