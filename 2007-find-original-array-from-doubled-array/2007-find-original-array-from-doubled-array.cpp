class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        if(n%2 != 0) return res;
        sort(arr.begin(), arr.end());
        unordered_map<int,int> m;
        for(int i:arr){
            if(i%2 == 1) m[i]++;
            else if(m.find(i/2) == m.end()) m[i]++;
            else if(m[i/2] > 0) {res.push_back(i/2); m[i/2]--;}
            else m[i]++;
        }
        vector<int> dummy;
        if(res.size() != n/2) return dummy;
        return res;
    }
};