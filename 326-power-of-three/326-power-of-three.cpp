class Solution {
public:
    int cnt = 0;
    bool isPowerOfThree(int n) {
        if(pow(3,cnt) == n) return true;
        if(pow(3,cnt) > n) return false;
        cnt++;
        return isPowerOfThree(n);
    } 
};