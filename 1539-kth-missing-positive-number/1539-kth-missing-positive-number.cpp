class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        int i = 0;
        int j = 1;
        
        while(k>0 && i<n){
            if(arr[i] == j){
                j++;
                i++;
            }
            else{
                k--;
                j++;
            }
        }
        
        return (i>=n) ? (j+k-1): (j-1);
    }
};