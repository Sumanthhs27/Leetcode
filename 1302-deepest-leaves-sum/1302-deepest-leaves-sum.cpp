
class Solution {
public:
    
    void dfs(TreeNode* r, int height, int& max_height, int& sum){
        
        if(!r) return;
        if(!r->left && !r->right){
            if(height > max_height){
                max_height = height;
                sum = r->val;
            }
            else if(height == max_height) {
                sum += r->val;
            }
            return;
        }
        dfs(r->left, height+1, max_height, sum);
        dfs(r->right, height+1, max_height, sum);
    }
        
    
    
    int deepestLeavesSum(TreeNode* r) {
        int sum = 0, max_height = INT_MIN, height = 1;
        if(!r) return 0;
        if(!r->left && !r->right) return r->val;
        dfs(r,height, max_height, sum);
        return sum;        
    }
};