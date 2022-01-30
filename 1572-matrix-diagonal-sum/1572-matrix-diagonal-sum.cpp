class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int j = n-1;
        int count = 0;
        for(int i = 0; i<n; i++){
            cout << mat[i][n-1-j] << " ";
            count += mat[i][n-1-j];
            if( i != j ){
                cout << mat[i][j] << "   " ;
                count += mat[i][j];
            } 
            cout << i << " " << j << endl;
            j--;            
        }
        return count;
    }
};