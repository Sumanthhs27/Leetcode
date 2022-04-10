class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n = columnTitle.length();
        int i = n;
        int count = 0;
      
        while(n>0){
            int ascii = int(columnTitle[n-1])-64;
            count += (ascii*pow(26,i-n));
            n--;
        }
        
        return count;
        
    }
};