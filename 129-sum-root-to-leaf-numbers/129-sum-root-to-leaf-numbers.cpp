
class Solution {
public:
    int res = 0;
    
    void helper(TreeNode* r, int sum){
        if(!r) return;
        if(!r->left && !r->right){
            sum = sum*10 + r->val;
            res += sum;
            return;
        }
        sum = sum*10 + r->val;
        helper(r->left,sum);
        helper(r->right,sum);
    }
    
    
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        if(!root->left && !root->right) return root->val;
        helper(root,sum);
        return res;      
    }
};

/*
void helper(TreeNode* root, string& ans, vector<string>& res){
        if(!root) return;
        if(!root->left && !root->right){
            ans += to_string(root->val);
            res.push_back(ans);
            return;
        }
        ans += to_string(root->val);
        if(root->left) {
            helper(root->left,ans,res);
            ans.pop_back();
        }
        if(root->right) {
            helper(root->right,ans,res);
            ans.pop_back();
        }
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
        
    */