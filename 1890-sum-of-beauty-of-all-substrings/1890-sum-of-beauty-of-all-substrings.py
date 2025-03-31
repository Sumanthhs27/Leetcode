class Solution:
    def beautySum(self, s: str) -> int:
        
        def get_beauty(s, mp):
            
            for i in s:
                if i not in mp:
                    mp[i] = 0
                mp[i] += 1
            
            mini = float('inf')
            maxi = float('-inf')

            for key, value in mp.items():
                mini = min(mini, value)
                maxi = max(maxi, value)

            return maxi-mini
        
        mp = {}
        res = 0

        for i in range(len(s)):
            for j in range(i+1, len(s)+1):
                sub_s = (s[i:j])
                res += get_beauty(sub_s, mp)
                mp.clear()

        return res

        