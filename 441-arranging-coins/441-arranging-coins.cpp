class Solution {
public:
    int arrangeCoins(int n) {
        
        long l = 0;
        long r = n/2 + 1;
        long mid = (l+r)/2;
        
        while(l<=r){
            long long sum = (mid*(mid+1))/2;
            if(sum == n) return mid;
            else if(sum > n){
                r = mid-1;
                mid = (l+r)/2;
            } 
            else{
                l = mid+1;
                mid = (l+r)/2;
            }            
        }
        return r;
        
    }
};