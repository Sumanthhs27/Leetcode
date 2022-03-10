class Solution {
public:
    void reverse(string &s, int l, int r){
        
        for(int i=l; i<=(l+r)/2; i++){
            swap(s[i], s[r-i+l]);
        }
        
    }
    
    string reverseWords(string s) {
        
        int n = s.length();
        int l=0; 
        int r=0;
        
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                r=i;
                if(i==n-1) reverse(s,l,r);
            } 
            
            else if(s[i] == ' ') {
                reverse(s,l,r);
                while(s[i+1] == ' ') i++;
                l = i+1;                           
            }
        }
        
        return s;
        
    }
};