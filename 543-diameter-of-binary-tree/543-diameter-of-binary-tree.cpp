class Solution {
public:
//     int maxi = -1;
         
//     int height(TreeNode* root){
//         if(!root) return 0;
//         int lh = height(root->left);
//         int rh = height(root->right);
//         maxi = max(maxi, lh+rh);
//         return max(lh,rh) + 1;
//     }
      
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(!root) return 0;
//         height(root);
//         return maxi;
//     }    
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

/*
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
    
*/