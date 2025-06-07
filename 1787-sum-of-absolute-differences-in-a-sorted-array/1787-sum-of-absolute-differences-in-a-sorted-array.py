class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        sum_= sum(nums)
        res = [0]*len(nums)
        prefix_sum = 0

        for i in range(len(nums)):
            # print(f"sum_: {sum_}, prefix: {prefix_sum}")
            res[i] = (sum_ - prefix_sum - nums[i]) - prefix_sum - nums[i]*(len(nums)-i-1 - i)
            prefix_sum += nums[i]
        
        return res