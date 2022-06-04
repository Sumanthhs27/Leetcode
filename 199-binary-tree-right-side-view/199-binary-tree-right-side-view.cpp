class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<int> res;             
        if(!root) return res;
        q.push(root);
        TreeNode* t;
        
        while(!q.empty()){
            q.push(NULL);
            
            while(q.front() != NULL){
                t = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                q.pop();
            }
            res.push_back(t->val);   
            q.pop();   
        }
        return res;
        
        
    }
};