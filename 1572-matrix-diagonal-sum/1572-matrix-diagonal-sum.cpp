class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int j = n-1;
        int count = 0;
        
        for(int i = 0; i<n; i++){
            count += mat[i][n-1-j];
            if( i != j ){
                count += mat[i][j];
            }
            j--;            
        }
        return count;
    }
};




class Solution {
    public int diagonalSum(int[][] mat) {
        
        int n = mat.length;
        int sum = 0;
        int c =  n-1;
        
       for(int r = 0 ; r < n; r++){
          
           if(r == c)
           { 
               sum += mat[r][c];
               return sum;
           }
           
           if(r > c)
              return sum;
           
           sum += mat[r][r] + mat[r][c] + mat[c][r] + mat [c][c];
               
           c--;
       }
        
        return sum;
    }
}
