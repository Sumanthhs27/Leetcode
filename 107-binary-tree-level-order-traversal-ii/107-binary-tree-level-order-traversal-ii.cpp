/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;             
        if(!root) return res;
        q.push(root);
        
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
            res.push_back(ans);   
            q.pop();
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};