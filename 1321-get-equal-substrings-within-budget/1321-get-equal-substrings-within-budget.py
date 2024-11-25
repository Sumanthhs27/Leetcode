class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        l = cost = res = 0
        for r in range(len(s)):
            cost += abs(ord(s[r]) - ord(t[r]))

            while cost > maxCost and l <= r:
                cost -= abs(ord(s[l]) - ord(t[l]))
                l += 1
            
            res = max(res, r-l+1)
        
        return res
            

