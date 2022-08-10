class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        int n = image.size();
        int m = image[1].size();
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int temp = image[sr][sc];
        image[sr][sc] = color;
        while(!q.empty()){
            auto pos = q.front();
            q.pop();
            int row = pos.first;
            int col = pos.second;
            
            if(row+1 < n && image[row+1][col] == temp){
                q.push({row+1,col});
                image[row+1][col] = color;
            }
            if(row-1 >= 0 && row-1 < n && image[row-1][col] == temp){
                q.push({row-1,col});
                image[row-1][col] = color;
            }
            if(col+1 < m && image[row][col+1] == temp){
                q.push({row,col+1});
                image[row][col+1] = color;
            }
            if(col-1 >= 0 && col-1 < m && image[row][col-1] == temp){
                q.push({row,col-1});
                image[row][col-1] = color;
            }
        }
        cout << n << " " << m;
        return image;
    }
};