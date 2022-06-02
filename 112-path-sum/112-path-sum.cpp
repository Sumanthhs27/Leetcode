
class Solution {
public:
    int sum = 0;
    
    bool hasPathSum(TreeNode* root, int targetSum) {     
        if(!root) return false;
        if(!root->left && !root->right) {
            if(sum + root->val == targetSum)return true;
            return false;
        }        
        sum += root->val;
        bool x = hasPathSum(root->left,targetSum);
        bool y = hasPathSum(root->right,targetSum);
        sum -= root->val;
        return x || y;
    }
};