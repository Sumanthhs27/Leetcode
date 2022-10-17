class Solution {
public:
    
    void dfs(int i,int j,bool& f,int n,int m,vector<vector<int>>& vis,vector<vector<int>>& g1, vector<vector<int>>& g2){
        vis[i][j] = 1;
        //cout << i << " " << j << endl;
        vector<int> dx = {1,-1,0,0}, dy = {0,0,1,-1};
        
        for(int idx=0; idx<4; idx++){
            int ni = i+dx[idx], nj = j+dy[idx];
            if(ni<0 || ni>=n || nj <0 || nj >= m) continue;
            if(g2[ni][nj] && !g1[ni][nj] && !vis[ni][nj]) f = false;
            if(g2[ni][nj] && g1[ni][nj] && !vis[ni][nj]){
                dfs(ni,nj,f,n,m,vis,g1,g2);
            }
        }
    }
    
    
    int countSubIslands(vector<vector<int>>& g1, vector<vector<int>>& g2) {
        int n = g2.size(), m = g2[0].size(), cnt = 0;
        vector<vector<int>> vis (n, vector<int> (m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                bool flag = true;
                if(g2[i][j] && g1[i][j] && !vis[i][j]){
                    dfs(i,j,flag,n,m,vis,g1,g2);
                    if(flag) cnt++;
                }
            }
        }
        return cnt;        
    }
};