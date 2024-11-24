class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        if k >= len(nums):
            return len(nums)
            
        mp = {}
        l = res = 0

        for r in range(len(nums)):
            if nums[r] not in mp:
                mp[nums[r]] = 0
            mp[nums[r]] += 1

            while mp[nums[r]] > k and l < r:
                mp[nums[l]] -= 1
                l += 1
            res = max(res, r-l+1)
        
        return res
