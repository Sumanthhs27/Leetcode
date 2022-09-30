/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void dfs(TreeNode* r, int lvl, int& max_lvl, int& ele){
        if(!r) return;
        if(!r->left && !r->right) {
            if(lvl > max_lvl){
                ele = r->val;
                max_lvl = lvl;
            }
            return;
        }
        dfs(r->left, lvl+1, max_lvl, ele);
        dfs(r->right, lvl+1, max_lvl, ele);
    }
    
    int findBottomLeftValue(TreeNode* r) {
        
        int ele = r->val, lvl = 1, max_lvl = 1;
        if(!r->left && !r->right) return ele;
        
        dfs(r,lvl,max_lvl,ele);
        return ele;       
    }
};