class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
//         int n = name.length();
//         int m = typed.length();
//         bool ans = true;
        
//         if(m < n) return false;
//         if(name == typed) return true;
//         if(name[0] != typed[0]) return false;
        
//         int curr = 1;
//         for(int i=1; i<m; i++){
//             if(name[curr] == typed[i]){
//                 curr++;
//                 curr = min(curr,n);
//             }
//             else{
//                 if(typed[i] != typed[i-1]) ans = false;
//             }
//         }
        
//         return ans;
        
        int curr=0;
        for(int i=0;i<typed.size();i++){
            if(typed[i]==name[curr]){
                curr++;
            }else{
                if(i>0){
                    if(typed[i]!=typed[i-1]){
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        return curr == name.size();
    }
};