class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        mp = {}

        for i in strs:
            j = "".join(sorted(i))

            if j in mp:
                mp[j].append(i)
            else:
                mp[j] = [i]
        
        return list(mp.values())