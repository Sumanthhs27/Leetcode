class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        for(auto i : edges){
            if(m.find(i[0]) != m.end()) return i[0];
            else m[i[0]]++;
            if(m.find(i[1]) != m.end()) return i[1];
            else m[i[1]]++;
        }
        return -1;
    }
};