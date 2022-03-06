class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int n = name.length();
        int m = typed.length();
     
        
        if(m < n) return false;
        if(name == typed) return true;
        if(name[0] != typed[0]) return false;
        
        int curr = 1;
        for(int i=1; i<m; i++){
            if(name[curr] == typed[i]){
                curr++;
            }
            else{
                if(typed[i] != typed[i-1]) return false;
            }
        }
        cout << name[curr];
        return curr == n;
        
    }
};