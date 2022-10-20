
class Solution {
public:
    vector<int> largestValues(TreeNode* r) {
        
        vector<int> res;
        if(!r) return res;
        queue<TreeNode*> q;
        q.push(r);
        
        while(!q.empty()){
            int cnt = q.size(), maxi = q.front()->val;
            for(int i=1; i<=cnt; i++){
                TreeNode* temp = q.front();
                maxi = max(maxi,temp->val);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.push_back(maxi);
        }
        return res;
    }
};