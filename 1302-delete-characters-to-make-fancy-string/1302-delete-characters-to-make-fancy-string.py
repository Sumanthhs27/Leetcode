class Solution:
    def makeFancyString(self, s: str) -> str:
        
        n = len(s)
        if n < 3:
            return s
        
        res = s[0:2]
        # print(res)
        for i in range(2,n):
            if s[i] == res[-1] and s[i] == res[-2]:
                continue
            else:
                res += s[i]
        
        return res