
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         queue<TreeNode*> q;
        vector<vector<int>> res;             
        if(!root) return res;
        q.push(root);
        bool f = false;
        
        while(!q.empty()){
            vector<int> ans;
            q.push(NULL);
            while(q.front() != NULL){
                TreeNode* t = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                ans.push_back(t->val);
                q.pop();
            }
            f = !f;
            if(f){
                res.push_back(ans);   
            }
            else {
                reverse(ans.begin(),ans.end());
                res.push_back(ans);  
            }           
            q.pop();
            
        }
        return res;
    }
};