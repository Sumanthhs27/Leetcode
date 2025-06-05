class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        cnt_binary_code = 2**k
        bin_codes = set()
        i = 0
        
        while i+k <= len(s):
            bin_codes.add(s[i:i+k])
            i+=1
        
        return len(bin_codes) == cnt_binary_code