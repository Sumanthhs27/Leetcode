class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        curr_sum = 0
        for i in range(len(nums)):
            nums[i] += curr_sum
            curr_sum = nums[i]
        
        mini = 0
        res = float("-inf")

        for i in nums:
            curr_diff = i - mini
            res = max(curr_diff, res)
            mini = min(mini, i)
        
        return res
