class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        n = len(nums)
        nums.sort()
        i = res = 0
        j = n - 1

        while i <= j:
            if nums[i] + nums[j] > target:
                j -= 1
            else:
                res += 2**(j-i)
                i += 1
        
        return res % (10**9 + 7)