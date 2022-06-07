
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root->right && !root->left) return 1;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        long long left,right,min;
        long long max_width = INT_MIN;
        
        while(!q.empty()){
            q.push({NULL,-1});
            
            left = q.front().second;
            min = left;
                    
            while(q.front().first != NULL){
                TreeNode* t = q.front().first;
                right = q.front().second;
                int temp = (q.front().second - min)*2;
                if(t->left) q.push({t->left,temp+1});
                if(t->right) q.push({t->right,temp+2});
                q.pop();
                
            }
            q.pop();
            max_width = max(max_width,right-left+1);
        }
        return max_width;
    }
};