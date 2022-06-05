
class Solution {
public:
    
    bool fn(TreeNode* r1, TreeNode* r2){
        if(!r1 || !r2) return r1 == r2;
        if(r1->val != r2->val) return false;
        return fn(r1->left,r2->right) && fn(r1->right, r2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        return fn(root->left,root->right);
        
    }
};