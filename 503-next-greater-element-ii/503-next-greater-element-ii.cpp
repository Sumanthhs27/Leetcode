class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> s;
        vector<int> v;
        
        for(int i=nums.size()-1; i>=0; i--) s.push(nums[i]);         
          
        for(int i=nums.size()-1; i>=0; i--){         
            while(!s.empty()){
                if(s.top() > nums[i]){
                    v.push_back(s.top());
                    break;
                }
                else s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }  
            s.push(nums[i]);
        }        
        reverse(v.begin(),v.end());
        return v;
    }
};