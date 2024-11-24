class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n,m = len(s1), len(s2)
        if n > m: return False
        
        mp = collections.Counter(s1)
        l=cnt=0
        mp2 = {}
        for r in range(m):
            if s2[r] not in mp2:
                mp2[s2[r]] = 0

            mp2[s2[r]] += 1

            if r-l+1 > n:
                mp2[s2[l]] -= 1
                if mp2[s2[l]] == 0:
                    mp2.pop(s2[l])
                l += 1
            
            if r-l+1 == n:
                # print(f"mp: {mp}, mp2: {mp2}")
                if mp == mp2:
                    return True
        
        return False