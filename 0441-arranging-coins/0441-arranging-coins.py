class Solution:
    def isPossible(self, coins, rows):
        return (rows*(rows+1))//2 <= coins

    def arrangeCoins(self, n: int) -> int:
        l = 1
        r = n

        while l < r :
            mid = (l+r)//2

            if not self.isPossible(n, mid):
                r = mid - 1
            else:
                l = mid + 1
        
        if self.isPossible(n, l):
            return l
        else:
            return l - 1
