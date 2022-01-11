class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
           int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            set<int> strow;
            set<int> stcol;
            for(int j=0;j<n;j++)
            {
                stcol.insert(matrix[j][i]);
                strow.insert(matrix[i][j]);
            }
            if(stcol.size() != n || strow.size() != n) return false;
        }
        return true;
// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/discuss/1682671/C%2B%2B-or-Easy-To-Understand-or-Set
        
    }
};