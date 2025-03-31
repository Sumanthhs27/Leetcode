class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if s1 == s2:
            return True
        
        mp1 = {}
        mp2 = {}
        diff_cnt = 0

        for i,j in zip(s1,s2):
            if i != j:
                diff_cnt += 1
                mp1[i] = mp1.setdefault(i, 0) + 1
                mp2[j] = mp2.setdefault(j,0) + 1

            if diff_cnt > 2:
                return False
        
        if diff_cnt != 2:
            return False
        else:
            return mp1 == mp2