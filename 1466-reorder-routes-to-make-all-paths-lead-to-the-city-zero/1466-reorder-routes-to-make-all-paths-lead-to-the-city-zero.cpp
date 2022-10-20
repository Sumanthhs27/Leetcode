class Solution {
public:
    
    
    void dfs(int& i,int& cnt,vector<int>& vis,vector<vector<int>> &adj,set<pair<int,int>>&s){
        vis[i] = 1;
        for(auto j : adj[i]){
            if(!vis[j] && s.find({i,j}) != s.end()) cnt++;
            if(!vis[j]) dfs(j,cnt,vis,adj,s);
        }   
    }
    
    
    int minReorder(int n, vector<vector<int>>& conn) {
        
        set<pair<int,int>> s;
        //vector<vector<int>> mat (n,vector<int> (n,0));
        for(auto vec : conn){
            int i = vec[0], j = vec[1];
            s.insert({i,j});
        }
        vector<int> vis (n,0);
        vector<vector<int>> adj(n);
        for(auto vec : conn){
            int u = vec[0], v = vec[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i,cnt,vis,adj,s);
            }
        }  
        
        return cnt;
    }
};