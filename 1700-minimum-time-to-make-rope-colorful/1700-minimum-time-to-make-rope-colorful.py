class Solution:
    def minCost(self, c: str, time: List[int]) -> int:
        n = len(c)
        if n == 1:
            return 0

        i = res = 0
        j = 1

        while j < n:
            if c[i] != c[j]:
                i = j
                j += 1
            else:
                if time[j] <= time[i]:
                    res += time[j]
                    j += 1
                else:
                    res += time[i]
                    i = j
                    j += 1

        return res
