class Solution {
public:
    void dfs(int i, vector<int>& vis, int n, vector<vector<int>>& adj){
        vis[i] = 1;
        for(int j = 0; j<n; j++){
            if(i != j && adj[i][j]){
                if(!vis[j]){
                    dfs(j,vis,n,adj);
                }
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis (n,0);
        int components = 0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                components++;
                dfs(i,vis,n,adj);
            }
        }
        return components;
    }
};