class Solution {
public:
    bool ans = true;
    
    int height(TreeNode*& root){
        if(!root) return 0;
        if(!ans) return 0;
        int left = height(root->left);
        int right = height(root->right);
        
        if(abs(left-right) > 1) ans = false;
        return max(left,right) + 1;
    }    
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        height(root);
        return ans;       
    } 
};

/*

class Solution {
public:
    bool ans = true;
    
    int height(TreeNode*& root){
        if(!root) return 0;
        if(!ans) return 0;
        
        if(abs(height(root->left)- height(root->right)) > 1) ans = false;
        
        return max(height(root->left), height(root->right)) + 1;
    }    
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        height(root);
        return ans;       
    } 
};

*/