class Solution:
    def beautySum(self, s: str) -> int:
        
        def generate_all_substrings(s):
            res = []

            for i in range(len(s)):
                for j in range(i+1, len(s)+1):
                    res.append(s[i:j])
            return res
        
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

        
        all_subs = generate_all_substrings(s)
        # print(all_subs)
        mp = {}
        res = 0
        for i in all_subs:
            res += get_beauty(i, mp)
            mp.clear()
        return res

        