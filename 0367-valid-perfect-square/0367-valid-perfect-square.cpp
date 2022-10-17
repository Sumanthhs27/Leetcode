class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long long l = 1, r = num/2 + 1;
        while(l<r){
            long long mid = (l+r)/2;
            if(mid*mid == num) return true;
            else if(mid*mid > num) r=mid;
            else l = mid + 1;
        }
        return false;
    }
};