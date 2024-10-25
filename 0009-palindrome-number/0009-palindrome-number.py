class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        if x < 0:
            return False
        if x < 10:
            return True
        
        for i in range(len(str(x))//2):
            r = len(str(x)) - 1 - i

            if str(x)[i] != str(x)[r]:
                return False
        
        return True
