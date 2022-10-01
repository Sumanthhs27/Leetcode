class Solution {
public:
    
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i : nums) m[i]++;
        priority_queue<pair<int,int>> q;
        for(auto i=m.begin(); i!= m.end(); i++){
            int num = i->first, freq = i->second;
            q.push({freq,num});
        }
        
        vector<int> res;
        while(k--){
            auto it = q.top();
            q.pop();
            int num = it.second;
            res.push_back(num);
        }
        return res;
    }
};