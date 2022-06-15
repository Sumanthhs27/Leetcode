class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {     
        vector<vector<int>> res;
        int n=intervals.size(),j;
        for(j=0;j<n;++j) if(newInterval[0] < intervals[j][0]) break;
        auto it = intervals.begin()+j;
        intervals.insert(it,newInterval);
        
        n = intervals.size();       
        int i=0,start,end;
        
        while(i<n){
            vector<int> arr;
            start = intervals[i][0];
            end = intervals[i][1];
            while(i<n-1 && end >= intervals[i+1][0]){
                if(end > intervals[i+1][1]) i++;
                else end = intervals[++i][1];
            }
            arr.push_back(start);
            arr.push_back(end); 
            res.push_back(arr);
            i++;
        }        
        return res;
        
    }
};