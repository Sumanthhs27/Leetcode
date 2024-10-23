class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        found_letter = False
        res = 0

        for i in range(len(s)-1, -1, -1):
            if s[i] == " " and found_letter:
                return res
            elif s[i] != " ":
                res += 1
                found_letter = True
                
        return res

