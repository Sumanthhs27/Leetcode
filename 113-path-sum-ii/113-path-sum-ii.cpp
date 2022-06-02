
class Solution {
public:
    
    void helper(TreeNode* root, vector<int>& ans, vector<vector<int>>& res,int sum, int targetSum){
        if(!root) return;
        if(!root->left && !root->right){
            sum += root->val;
            ans.push_back(root->val);
            if(sum == targetSum){ res.push_back(ans); }
            return;
        }
        sum += root->val;
        ans.push_back(root->val);
        if(root->left) {
            helper(root->left,ans,res,sum,targetSum);
            ans.pop_back();
        }
        if(root->right){
            helper(root->right,ans,res,sum,targetSum);
            ans.pop_back();
        }
    } 
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> ans;
        int sum = 0;
        helper(root, ans, res, sum, targetSum);
        return res;
    }
};