// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long l = 1;
        long r = n;
        long mid = (l+r)/2;
        
        while(l<r){
            if(isBadVersion(mid) == true){
                if(l == mid || isBadVersion(mid-1) == false) return mid;
                else {
                    r = mid-1;
                    mid = (l+r)/2;
                }
            }
            else{
                l = mid+1;
                mid = (l+r)/2;
            }
        }
        return mid;
    }
};