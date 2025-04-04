class Solution:
    def minimumLength(self, s: str) -> int:
        n = len(s)
        i,j = 0, n-1

        while i < j:            
            if s[i] != s[j]:
                return j-i+1

            while i+1 < j and s[i] == s[i+1]:
                i += 1

            while j-1 > i and s[j] == s[j-1]:
                j -= 1
            
            i += 1
            j -= 1
        return max(j-i+1,0)
