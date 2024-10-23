class Solution:
    def minimumSum(self, nums: List[int]) -> int:
        
        res = -1 

        for i in range(len(nums)-2):
            for j in range(i+1, len(nums)-1):
                for k in range(j+1, len(nums)):

                    if nums[j] > nums[i] and nums[j] > nums[k]:
                        sum_ = nums[i] + nums[j] + nums[k]

                        if res < 0:
                            res = sum_
                        else:
                            res = min(res, sum_)
        
        return res