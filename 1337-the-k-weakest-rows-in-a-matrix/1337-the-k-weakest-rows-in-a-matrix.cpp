class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       vector<int>ans;
        vector<pair<int,int>>v;
        int size=mat.size();
        for(int i=0;i<size;i++){
            int ct=count(mat[i].begin(),mat[i].end(),1);
            pair<int,int>p;
            p={ct,i};
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans; 
    }
};