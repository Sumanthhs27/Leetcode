class Solution:
    def bagOfTokensScore(self, t: List[int], power: int) -> int:
        t.sort()
        i,j = 0, len(t)-1

        res = curr_score = 0

        while i<=j:
            if power >= t[i]:
                power -= t[i]
                i += 1
                curr_score += 1
                res = max(res, curr_score)
            else:
                if curr_score < 1:
                    return res
                else:
                    curr_score -= 1
                    power += t[j]
                    j -= 1
        return res