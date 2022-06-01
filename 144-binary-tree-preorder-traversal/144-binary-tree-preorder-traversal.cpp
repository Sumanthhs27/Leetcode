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
    
    void helper(vector<int>& res, TreeNode* root){
        if(!root) return;
        res.push_back(root->val);
        helper(res,root->left);
        helper(res,root->right);
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(res,root);
        return res;        
    }
};