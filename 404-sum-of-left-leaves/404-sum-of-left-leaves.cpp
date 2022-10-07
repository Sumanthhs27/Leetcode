
class Solution {
public:
    void fn(TreeNode* r, int& sum, bool flag){
        if(!r) return;
        if(!r->left && !r->right && flag) {sum += r->val; return;}
        fn(r->left,sum,true);
        fn(r->right,sum,false);
    }
    
    
    int sumOfLeftLeaves(TreeNode* r) {
        
        int sum = 0;
        bool f = true;
        if(!r) return 0;
        if(!r->left && !r->right) return 0;
        fn(r,sum,f);
        return sum;
    }
};