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

void dfs(TreeNode* & r, int height, int& val, int& depth){
    if(!r) return;
    if(height == depth){
        TreeNode* temp1 = new TreeNode(val,r->left,NULL);
        TreeNode* temp2 = new TreeNode(val,NULL,r->right);
        r->left = temp1;
        r->right = temp2;
        return;
    }
    dfs(r->left,height+1,val,depth);
    dfs(r->right,height+1,val,depth);
}


class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* temp = new TreeNode(val,root,NULL);
            root = temp;
            return root;
        }
        
        int height = 0;
        depth -= 2;
        dfs(root,height,val,depth);
        return root;
    }
};