class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        
        res = 0
        n = len(nums)

        if n == 1:
            return 0
        if n == 1:
            return 0 if nums[1] <= nums[0] else nums[1]-nums[0]

        l = 0
        r = 1

        while r < n:
            curr_diff = nums[r]-nums[l]

            if curr_diff <= 0:
                l = r 
                r += 1
            
            else:
                res = max(res, curr_diff)
                r += 1

        return res
