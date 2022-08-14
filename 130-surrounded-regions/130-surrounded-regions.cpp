class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>>& vis, int n, int m, vector<vector<char>> &A){
        vis[i][j] = 1;
        if(i+1 < n && A[i+1][j] == 'O' && !vis[i+1][j]) dfs(i+1,j,vis,n,m,A);
        if(i-1 >=0 && A[i-1][j] == 'O' && !vis[i-1][j]) dfs(i-1,j,vis,n,m,A);
        if(j+1 < m && A[i][j+1] == 'O' && !vis[i][j+1]) dfs(i,j+1,vis,n,m,A);
        if(j-1 >=0 && A[i][j-1] == 'O' && !vis[i][j-1]) dfs(i,j-1,vis,n,m,A);
        return;
    }
    

    void solve(vector<vector<char>>& A) {
    int n = A.size(), m = A[0].size();
    vector<vector<int>> vis (n,(vector<int> (m,0)));
    
    for(int i=0; i<n; ++i){
        if(!vis[i][0] && A[i][0] == 'O') dfs(i,0,vis,n,m,A);
    }
    for(int j=0; j<m; ++j){
        if(!vis[0][j] && A[0][j] == 'O') dfs(0,j,vis,n,m,A);
    }
    for(int j=0; j<m; ++j){
        if(!vis[n-1][j] && A[n-1][j] == 'O') dfs(n-1,j,vis,n,m,A);
    }
    for(int i=0; i<n; ++i){
        if(!vis[i][m-1] && A[i][m-1] == 'O') dfs(i,m-1,vis,n,m,A);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; ++j){
            if(!vis[i][j] && A[i][j] == 'O'){
                A[i][j] = 'X';
            }
        }
    }
    return;
    }
};




