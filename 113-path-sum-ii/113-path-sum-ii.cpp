
class Solution {
public:
    
    void helper(TreeNode* root, vector<int> ans, vector<vector<int>>& res,int sum, int targetSum){
        if(!root) return;
        if(!root->left && !root->right){
            sum += root->val;
            if(sum == targetSum){ ans.push_back(root->val); res.push_back(ans); }
            return;
        }
        sum += root->val;
        ans.push_back(root->val);
        helper(root->left,ans,res,sum,targetSum);
        helper(root->right,ans,res,sum,targetSum);
    } 
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> ans;
        int sum = 0;
        helper(root, ans, res, sum, targetSum);
        return res;
    }
};