class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = r;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i < j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        for(int i=0; i<r; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};