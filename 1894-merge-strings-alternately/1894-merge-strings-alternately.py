class Solution:
    def mergeAlternately(self, a: str, b: str) -> str:
        
        n = len(a)
        m = len(b)

        i, j = 0, 0

        res = ""
        while i < n and j < m:
            res += a[i]
            res+=b[j]
            i+=1
            j+=1
        

        if i < n and j >= m:
            res += a[i:]
        
        if i >= n and j < m:
            res += b[j:]
        
        return res