class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        long long l = 1, r = x/2;
        
        while(l<r){
            long long mid = (l+r)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid > x) r=mid-1;
            else l = mid+1;
        }
        return (l*l <= x) ? l : l-1;
    }
};