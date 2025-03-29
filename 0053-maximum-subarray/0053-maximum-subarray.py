class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        curr_sum = 0
        mini = 0
        res = float("-inf")

        for i in nums:
            curr_sum += i
            curr_diff = curr_sum - mini
            res = max(curr_diff, res)
            mini = min(mini, curr_sum)
        
        return res
