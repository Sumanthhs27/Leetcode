class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        bool flg = false;
        
        for(int i=0; i<rows; i++){
            if(target >= matrix[i][0] && target <= matrix[i][columns-1]){
                for(int j=0; j<columns; j++){
                    if(matrix[i][j] == target){
                        flg = true;
                        break;
                    }
                }
            }
            
        }
        return flg;
    }
};