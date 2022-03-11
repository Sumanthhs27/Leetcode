class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long l = 0;
        long long r = num/2;
        long long mid = (l+r)/2;
        if(num <= 1) return true;
        
        
        while(l<=r){
            if(mid*mid == num) return true;
            else if(l*l > num || r*r < num) return false;
            else if(mid*mid > num){
                r = mid-1;
                mid = (l+r)/2;
            }
            else if(mid*mid < num) {
                l = mid+1;
                mid = (l+r)/2;
            }          
        }
        return l==r;   
    }
};