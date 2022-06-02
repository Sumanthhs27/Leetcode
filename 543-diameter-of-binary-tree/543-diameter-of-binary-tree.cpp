class Solution {
public:
    
//     int height(TreeNode* root){
//         if(!root) return 0;
//         if(!root->left && !root->right) return 1;
        
//         return max(height(root->left),height(root->right)) + 1;
//     }
    
    
    
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(!root) return 0;
//         int i = height(root->left) + height(root->right);
//         int j = diameterOfBinaryTree(root->left);
//         int k = diameterOfBinaryTree(root->right);
//         return max(i,max(j,k));
//     }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        rec(root, d);
        return d;
    }
    
    int rec(TreeNode* root, int &d) {
        if(root == NULL) return 0;
        int ld = rec(root->left, d);
        int rd = rec(root->right, d);
        d=max(d,ld+rd);
        return max(ld,rd)+1;
    }
	
    
};