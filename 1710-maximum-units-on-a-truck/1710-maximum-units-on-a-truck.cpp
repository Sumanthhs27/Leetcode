class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        int n = bt.size(), m = bt[0].size(), res=0;
        sort(bt.begin(),bt.end(), [](vector<int>& a, vector<int>& b){
            return a[1]>b[1];
        });
        int i =0;
     while(ts && i<n){
         if(ts >= bt[i][0]) {
             res += bt[i][0]*bt[i][1];
             ts -= bt[i][0];
         }
         else {
             res += ts*bt[i][1];
             break;
         }
         i++;
     }
        
        return res;        
    }
};