class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int cnt =0;
        
        for(int i : nums){
            int a = i+k, b = i-k;
            if(m.find(a) != m.end()) cnt += m[a];
            if(m.find(b) != m.end()) cnt += m[b];
            m[i]++;
        }
        return cnt;
    }
};