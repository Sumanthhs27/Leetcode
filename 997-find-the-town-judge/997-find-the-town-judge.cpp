class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
            vector<int> out(n+1,0);
    int p1=0,p2=0,rest=-1;
    for(int i=0; i<trust.size(); i++){
        p1 = trust[i][0];
        p2 = trust[i][1];
        out[p1]--;
        out[p2]++;
    }
    for(int i=1; i<=n; i++){
        if(out[i] == n-1){
            rest = i;
            break;
        }
    }
    return rest;
        
    }
};