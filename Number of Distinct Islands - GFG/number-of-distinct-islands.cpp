//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int i,int j,string& s,int n,int m,vector<vector<int>>& vis,vector<vector<int>>& grid){
   
      vis[i][j] = 1;
      
      // DOWN 
      if(i+1 >= n || vis[i+1][j] || !grid[i+1][j]) s += "_";
      else {
          s += 'D';
          dfs(i+1,j,s,n,m,vis,grid);
      } 
      
      // UP
      if(i-1 < 0 || vis[i-1][j] || !grid[i-1][j]) s+= "_";
      else {
          s += 'U';
          dfs(i-1,j,s,n,m,vis,grid);
      }
      
      // RIGHT
      if(j+1 >= m || vis[i][j+1] || !grid[i][j+1]) s+= "_";
      else{
          s += 'R';
          dfs(i,j+1,s,n,m,vis,grid);
      }
      
      // LEFT
      if(j-1 < 0 || vis[i][j-1] || !grid[i][j-1]) s += "_ ";
      else {
          s += 'L';
          dfs(i,j-1,s,n,m,vis,grid);
      }

  }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        int cnt = 0, n = grid.size(), m = grid[0].size();
        unordered_set<string> mp;
        vector<vector<int>> vis (n,vector<int> (m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] && !vis[i][j]){
                    string s = "";
                    dfs(i,j,s,n,m,vis,grid);
                    mp.insert(s);
                }
            }
        }
        
        
        //for(auto it =mp.begin(); it!=mp.end(); it++) cout << it->first << endl;
        return mp.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends