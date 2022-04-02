class Solution {
public:
    
    bool isPalin(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        
        if(isPalin(s,i,j) == true) return true;
        
        while(i < j){
           if(s[i] != s[j]){
               return isPalin(s,i+1,j) || isPalin(s,i,j-1);
           } 
            i++;
            j--;
        }
        return true;
    }
};