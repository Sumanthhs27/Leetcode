class Solution {
public:
    int cnt = 0;
    bool isPowerOfFour(int n) {
        if(pow(4,cnt) == n) return true;
        if(pow(4,cnt) > n) return false;
        cnt++;
        return isPowerOfFour(n);
    }
};