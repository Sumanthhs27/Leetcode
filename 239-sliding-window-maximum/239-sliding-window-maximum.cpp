class Solution {
public:
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> result;
    int n = nums.size();
    if (k == 0) return result;
    
    priority_queue<pair<int, int>> q;
    
    for (int i = 0; i < n; i++) {
        while (!q.empty() && q.top().second <= i-k)
            q.pop();
        q.push({nums[i],i});
        
        if (i >= k-1)
            result.push_back(q.top().first);
    }
    
    return result;
    }
};