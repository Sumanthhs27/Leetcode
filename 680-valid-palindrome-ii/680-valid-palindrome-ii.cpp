class Solution {
public:
     bool isPal(const string& s, int l, int r) {
        while (l < r)
        {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            if (s[l] != s[r]) {
                return (isPal(s, l + 1, r) || isPal(s, l, r - 1));
            }
            l++;
            r--;
        }
        return true;
    }
};




// bool isPaindrome(string s, int n){
        
//         for(int i=0; i<n/2; i++){
//             if(s[i] != s[n-1-i]) return false;
//         }
//         return true;
//     }
    
    
//     bool validPalindrome(string s) {
//         int n = s.length();
//         if(isPaindrome(s,n)) return true;
        
//         int count = 0;
//         int i=0;
//         int j=n-1;
        
//         while(i<j){
//             if(s[i] == s[j]){
//                 i++;
//                 j--;
//             }
//             else{
//                 if(j-1 >= 1){
//                     if(s[i] == s[j-1]){
//                         i++;
//                         j -= 2;
//                         count++;
//                     }
//                     else if(s[i+1] == s[j]){
//                         i += 2;
//                         j--;
//                         count++;
//                     }
//                     else return false;
//                 }
//                 else {
//                     if(count > 0) return false;
//                     else return true;
//                 }
//             }
//         }
//         return (count <= 1);
        