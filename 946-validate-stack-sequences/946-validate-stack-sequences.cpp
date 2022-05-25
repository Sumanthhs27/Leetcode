class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack <int> st;
        int n = pushed.size(); 
        int m = popped.size();
        
        int i=0;
        int j=0;
        st.push(-1);
        
        while(j < m){            
            while(st.top() != popped[j] && i < n) st.push(pushed[i++]);                  
            if(st.top() == popped[j]) st.pop();                         
            j++;
        }        
        return (st.top() == -1) ? true : false;
        
    }
};



//  bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         stack<int> stack;
//         int i = 0;
//         for (int x : pushed) {
//             stack.push(x);
//             while (stack.size() && stack.top() == popped[i]) {
//                 stack.pop();
//                 i++;
//             }
//         }
//         return stack.size() == 0;
//     }


















