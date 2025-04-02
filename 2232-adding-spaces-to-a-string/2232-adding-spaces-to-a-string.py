class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        n = len(s)
        i = j = 0
        res = ""

        while j < len(spaces):
            if i == spaces[j]:
                res += f" {s[i]}"
                j += 1
            else:
                res += s[i]
            i += 1

        while i < n:
            res += s[i]
            i += 1

        return res

        