class Solution {
public:
    vector<TreeNode*> vec;
    unordered_map<string,int> ump;
    string solve(TreeNode* root){
        if(!root) return "$";
        string left = solve(root->left);
        string right = solve(root->right);
        string s = to_string(root->val) +"$"+left+"$"+right;
        if(ump[s]==1){
            vec.push_back(root);
        }
        ump[s]++;
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        if(!root) return vec;
        solve(root);
        return vec;
    }
};