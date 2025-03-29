class Solution:
    def maxDepth(self, s: str) -> int:
        res = 0
        open_brackets = 0

        for i in s:
            if i not in ['(', ')']:
                continue
            else:
                if i == '(':
                    open_brackets += 1
                    res = max(res, open_brackets)
                else:
                    open_brackets -= 1
        
        return res