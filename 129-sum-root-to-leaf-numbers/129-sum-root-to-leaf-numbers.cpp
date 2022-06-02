
class Solution {
public:
    void helper(TreeNode* root, string ans, vector<string>& res){
        if(!root) return;
        if(!root->left && !root->right){
            ans += to_string(root->val);
            res.push_back(ans);
            return;
        }
        ans += to_string(root->val);
        helper(root->left,ans,res);
        helper(root->right,ans,res);
    }
    
    
    
    int sumNumbers(TreeNode* root) {
        vector<string> res;
        string ans = "";
        helper(root,ans,res);
        
        int result = 0;
        for(auto x:res){
            result += stoi(x);
        }
        return result;
        
    }
};