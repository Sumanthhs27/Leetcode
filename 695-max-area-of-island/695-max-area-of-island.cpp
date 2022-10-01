class Solution {
public:
    
    void dfs(int i,int j, int& area,int& max_area,vector<vector<int>>& vis,int n, int m,vector<vector<int>>& grid, bool f){
        vis[i][j] = 1;
        if(f == false) area = 0;
        area++;
        max_area = max(max_area,area);
        cout << i << " " << j << " " << area << " " << max_area << endl;
        if(i+1<n && grid[i+1][j] && !vis[i+1][j]) dfs(i+1,j,area,max_area,vis,n,m,grid,true);
        if(i-1>=0 && grid[i-1][j] && !vis[i-1][j]) dfs(i-1,j,area,max_area,vis,n,m,grid,true);
        if(j+1<m && grid[i][j+1] && !vis[i][j+1]) dfs(i,j+1,area,max_area,vis,n,m,grid,true);
        if(j-1>=0 && grid[i][j-1] && !vis[i][j-1]) dfs(i,j-1,area,max_area,vis,n,m,grid,true);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), max_area = 0, area = 0;
        bool f = false;
        vector<vector<int>> vis (n, vector<int> (m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]){
                    dfs(i,j,area,max_area,vis,n,m,grid,f);
                }
            }
        }
        return max_area;
    }
};