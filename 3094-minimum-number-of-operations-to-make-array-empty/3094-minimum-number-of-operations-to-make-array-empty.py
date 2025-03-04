from collections import Counter
class Solution:

    def is_possible(self,three_cnt, freq):
        return (freq-3*three_cnt)%2 == 0

    def minOperations(self, nums: List[int]) -> int:
        
        mp = Counter(nums)
        cnt = 0
        for num, freq in mp.items():
            max_ = freq//3
            found = False
            for i in range(max_, -1, -1):
                if self.is_possible(i, freq):
                    two_cnt = (freq-3*i)//2
                    cnt += i + two_cnt
                    found = True
                    break
            
            if not found:
                return -1
        return cnt