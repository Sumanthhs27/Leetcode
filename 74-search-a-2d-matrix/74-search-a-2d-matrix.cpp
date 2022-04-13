class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int B) {
        int n = A.size(), m = A[0].size();
        int row = 0;
        int index = 0;
        for(int i=0; i<n; i++){
            if(A[i][m-1] >= B) {
                row = i;
                break;
            }
        }

        int l = 0, r = m-1;

        while(l<r){
            int mid = (l+r)/2;
            if(A[row][mid] == B) return 1;
            else if(A[row][mid] > B) r = mid;
            else l=mid+1;
        }
        return (A[row][l] == B) ? 1 : 0;
    }
};