class Solution {
public:
    
    int height(TreeNode* root){
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        
        return max(height(root->left),height(root->right)) + 1;
    }
    
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int i = height(root->left) + height(root->right);
        int j = diameterOfBinaryTree(root->left);
        int k = diameterOfBinaryTree(root->right);
        return max(i,max(j,k));
    }
};