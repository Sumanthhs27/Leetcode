class Solution:
    def longestPalindrome(self, s: str, t: str) -> int:
        def all_substrings(s):

            substrings = ['']
            for i in range(len(s)):
                for j in range(i + 1, len(s) + 1):
                    substrings.append(s[i:j])
            return substrings

        def is_palindrome(s):
            return s == s[::-1]

        max_len = 0
        
        s_subs = all_substrings(s)
        t_subs = all_substrings(t)
        
        for sub_s in s_subs:
            for sub_t in t_subs:
                combined = sub_s + sub_t
                if is_palindrome(combined):
                    max_len = max(max_len, len(combined))
        
        return max_len