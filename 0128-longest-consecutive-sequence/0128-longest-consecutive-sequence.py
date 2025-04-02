
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = set(nums)
        res = 0

        for i in nums:
            if i+1 in nums:
                continue
            
            curr_cnt = 1
            curr_ele = i
            while curr_ele - 1 in nums:
                curr_cnt += 1
                curr_ele -= 1
            res = max(res, curr_cnt)
        
        return res