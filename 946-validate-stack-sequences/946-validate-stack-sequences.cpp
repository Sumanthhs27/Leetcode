class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack <int> st;
       
        int i=0;
        int j=0;
        st.push(-1);
        
        while(j < popped.size()){            
            while(st.top() != popped[j] && i < pushed.size()) st.push(pushed[i++]);                  
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


















