class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        ones_cnt = 0

        for i in s:
            if i == "1":
                ones_cnt += 1
        
        res = ""
        for i in range(len(s)-1):
            if ones_cnt > 1:
                res += "1"
                ones_cnt -= 1
            else:
                res += "0"
        res += "1"
        return res