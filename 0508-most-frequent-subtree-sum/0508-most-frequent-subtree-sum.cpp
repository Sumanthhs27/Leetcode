
class Solution {
public:
    
    int fn(TreeNode* r, unordered_map<int,int>& m){
        if(!r) return 0;
        if(!r->left && !r->right){
            m[r->val]++;
            return r->val;
        }
        int left = fn(r->left,m);
        int right = fn(r->right,m);
        m[left+right+r->val]++;
        return left + right + r->val;
    } 
    
    vector<int> findFrequentTreeSum(TreeNode* r) {
        unordered_map<int,int> m;
        vector<int> res;
        if(!r) return res;
        if(!r->left && !r->right) return {r->val};
        int sum = fn(r,m);
        
        priority_queue<pair<int,int>> q;
        for(auto it=m.begin(); it!=m.end(); it++){
            q.push({it->second,it->first});
        }
        int most_freq = q.top().first;
        res.push_back(q.top().second);
        q.pop();
        while(!q.empty() && q.top().first == most_freq){
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
};