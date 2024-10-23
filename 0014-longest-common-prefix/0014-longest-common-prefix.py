class Solution:
    def longestCommonPrefix(self, s: List[str]) -> str:
        
        s.sort()

        if s[0] == s[-1]:
            return s[0]
        
        res = ""
        for i in range(len(s[0])):
            if s[0][i] == s[-1][i]:
                res += s[0][i]
            else:
                return res
            
        return res