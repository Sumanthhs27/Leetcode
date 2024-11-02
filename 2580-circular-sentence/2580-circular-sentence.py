class Solution:
    def isCircularSentence(self, s: str) -> bool:
        
        if s[0] != s[-1]:
            return False
        
        for idx, i in enumerate(s):

            if i == ' ':
                if s[idx-1] != s[idx+1]:
                    return False
        
        return True