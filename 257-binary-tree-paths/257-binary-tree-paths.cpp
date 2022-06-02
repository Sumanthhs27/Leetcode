
class Solution {
public:
    
    void helper(TreeNode* root, string ans, vector<string>& res){
        if(!root) return;
        if(!root->left && !root->right){
            ans += ("->" + to_string(root->val));
            res.push_back(ans);
            return;
        }
        ans += ("->" + to_string(root->val));
        helper(root->left, ans, res);
        helper(root->right, ans, res);
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string ans = "";
        if(!root->left && !root->right){
            res.push_back(to_string(root->val));
            return res;
        }     
        ans += to_string(root->val);
        helper(root->left,ans,res);
        helper(root->right,ans,res);
        return res;
    }
    
};