class Solution {
public:
    
    bool dfs(int i, int n, vector<int>& arr){
        if(i < 0 || i >= n || arr[i] < 0) return false;
        arr[i] = -1*arr[i];
        return !arr[i] || dfs(i+arr[i],n,arr) || dfs(i-arr[i],n,arr);
    }
    
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        return dfs(start,n,arr);
    }
};

