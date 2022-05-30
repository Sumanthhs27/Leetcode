class Solution {
public:
    int cnt = 0;
    bool isPowerOfTwo(int n) {
        if(pow(2,cnt) == n) return true;
        if(pow(2,cnt) > n) return false;
        cnt++;
        return isPowerOfTwo(n);
    }
};