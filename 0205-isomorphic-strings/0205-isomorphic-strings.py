class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        
        mp = {}

        for i in range(len(s)):

            if t[i] not in mp:
                mp[t[i]] = s[i]
            else:
                if mp[t[i]] != s[i]:
                    return False
        
        mp = {}

        for i in range(len(s)):

            if s[i] not in mp:
                mp[s[i]] = t[i]
            else:
                if mp[s[i]] != t[i]:
                    return False
        return True