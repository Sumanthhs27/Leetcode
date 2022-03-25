class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n = costs.size();
        int sumA = 0;
        for(int i=0;i<n;i++){
            sumA += costs[i][0];
        }
        
        vector<int> diff (n,0);
        for(int i=0;i<n;i++){
            diff[i] = costs[i][1] - costs[i][0];
        }
        for(int i=0;i<n;i++){
            cout << diff[i] << " " ;
        }
        
        sort(diff.begin(),diff.end());
        int sumB = 0;
        for(int i=0; i<n/2; i++){
            sumB += diff[i];
        }
        return sumA + sumB;
    }
};