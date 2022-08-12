class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<int> adj[n];
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        vector<int> vis (n,0);
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int j : adj[node]){
                if(j == destination) return true;
                if(!vis[j]){
                    q.push(j);
                    vis[j] = 1;
                }
            }
        }
        return false;
    }
};