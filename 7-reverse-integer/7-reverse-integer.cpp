class Solution {
public:
    long reverse(int x) {
        long y = 0;
        
        while(x != 0 ){
            y = y*10 + x%10;
            x = x/10;
            cout << y << "  " ;
        }
        
        if(y > INT_MAX || y < INT_MIN ){
            return 0;
        }
        else {
            return y;
        }
    }
};