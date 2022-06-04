
class Solution {
public:
    map<int,map<int,multiset<int>>>mp;
    void sol(TreeNode* root,int pos,int lev){
        if(!root)return;
        mp[pos][lev].insert(root->val);
        sol(root->left,pos-1,lev+1);
        sol(root->right,pos+1,lev+1);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        sol(root,0,0);
        vector<vector<int>> ans;
        for( auto itr: mp){
            vector<int> temp;
            for( auto i: itr.second){
                for( auto j: i.second){
                    temp.push_back(j);
                }     
            }  
            ans.push_back(temp);
        }  
        return ans;
    }
};



// MY SOLUTION has some error but ok.

/*
vector<vector<int>> verticalTraversal(TreeNode* root) {
      vector<vector<int>> res;
      if(!root) return res;
      
      queue<pair<TreeNode*,int>> q;
      map<int,vector<int>> m;
      
      q.push({root,0});
      
      while(!q.empty()){
          auto temp = q.front();
          TreeNode* node = temp.first;
          int line = temp.second;
          q.pop();
          
          m[line].push_back(node->val); 
          
          if(node->left) {
              q.push({node->left,temp.second-1});
          }
          if(temp.first->right){
              q.push({node->right,temp.second+1});
          }
      }
      
      for(auto it : m){
          res.push_back(it.second);
      }
      return res;
    }
*/