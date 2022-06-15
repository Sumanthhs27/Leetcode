class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> res;
        
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