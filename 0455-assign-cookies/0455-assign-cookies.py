class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        
        g.sort()
        s.sort()

        cnt = 0

        i,j = 0,0
        n = len(g)
        m = len(s)

        while i < n and j < m:
            if g[i] <= s[j]:
                cnt += 1
                i += 1
                j += 1
            
            else:
                j+=1
        
        return cnt