
class Solution {
public:
    int sum = 0;
    
    bool hasPathSum(TreeNode* root, int targetSum) {     
        if(!root) return false;
        if(!root->left && !root->right) {
            if(sum + root->val == targetSum){
                sum += root->val;
                return true;
            } 
            else return false;
        }
        
        sum += root->val;
        cout << sum << " " ;
        bool x = hasPathSum(root->left,targetSum);
        bool y = hasPathSum(root->right,targetSum);
        if(!x && !y) sum -= root->val;
        return x || y;
    }
};