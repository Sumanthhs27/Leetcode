class Solution {
public:
    
    
    int arrayNesting(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<bool> visited(n, false);
        for (int x : nums) {
            int cnt = 0;
            while (!visited[x]) {
                cnt += 1;
                visited[x] = true;
                x = nums[x];
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};