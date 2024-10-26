class Solution:
    
    def isPalindrome(self, s):

        l = 0
        r = len(s)-1

        while l<r:
            if s[l] != s[r]:
                return False
            
            l+=1
            r-=1
        
        return True
    
    def validPalindrome(self, s: str) -> bool:
        
        l = 0
        r = len(s)-1

        cnt = 0

        while l<=r:
            if s[l] == s[r]:
               l+=1
               r-=1
               continue
            
            print(f"s[l+1:r] - {s[l+1:r+1]}")
            print(f"s[l:r-1] - {s[l:r]}")
            if self.isPalindrome(s[l+1:r+1]):
                return True
            
            if self.isPalindrome(s[l:r]):
                return True

            return False
        
        return True
