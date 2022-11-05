class Solution {
public:
    
    bool check(int i, string& s){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int n=s.length(),i=0, j=n-1;
        
        while(i<j){
            if(check(i,s) && check(j,s)) swap(s[i++],s[j--]);
            else if(check(i,s)) j--;
            else if(check(j,s)) i++;
            else{
                i++; j--;
            }
        }
        
        return s;
    }
};