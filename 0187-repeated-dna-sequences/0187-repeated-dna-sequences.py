class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        mp = {}
        res = set()
        i = 0
        while i+10 <= len(s):
            if s[i:i+10] not in mp:
                mp[s[i:i+10]] = 1
            else:
                res.add(s[i:i+10])
            i+=1
        
        return list(res)