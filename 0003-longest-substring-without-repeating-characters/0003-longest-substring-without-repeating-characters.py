class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        if n <= 1: return n

        res = 0
        l=r=0
        mp = set()
        while r < n:
            if s[r] not in mp:
                mp.add(s[r])

                res = max(res, r-l+1)
            
            else:
                while l<r and s[l] != s[r]:
                    mp.remove(s[l])
                    l +=1
                l += 1
            r += 1
        return res
