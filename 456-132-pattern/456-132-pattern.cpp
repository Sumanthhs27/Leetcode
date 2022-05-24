class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size() < 3) return false;
        stack <int> st; 
        
        int last = INT_MIN;
        
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i] < last) return true;
            while(!st.empty() && nums[i] > st.top()){
                last = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};