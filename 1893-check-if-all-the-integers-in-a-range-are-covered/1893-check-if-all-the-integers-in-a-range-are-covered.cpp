class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n=ranges.size();
        sort(ranges.begin(), ranges.end());
        int p=left;
        for(int i=0;i<n;i++){
            if(ranges[i][0]<=p && p<=ranges[i][1]){
                while(p<=right){
                    p++;
                    if(ranges[i][0]<=p && p<=ranges[i][1])
                        continue;
                    else
                        break;
                }
               
                if(p>right) return true;
                
            }
        }
        return false;
    }
};