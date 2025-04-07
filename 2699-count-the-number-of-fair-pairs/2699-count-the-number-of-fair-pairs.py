import bisect
class Solution:
    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        nums.sort()
        l, r = 0, len(nums)-1
        print(l,r)

        res = 0
        for i in range(len(nums)):
            lower_bound = lower - nums[i] 
            upper_bound = upper - nums[i] 
            lb_count = bisect.bisect_left(nums, lower_bound, 0, i)
            ub_count = bisect.bisect_right(nums, upper_bound, 0, i)
            res += ub_count - lb_count
        
        return res