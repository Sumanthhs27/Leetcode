class Solution:
    def minimumSteps(self, s: str) -> int:
        
        res = 0
        ones_cnt = 0

        for i in s:
            if i == "0":
                res += ones_cnt
            else:
                ones_cnt += 1
        
        return res