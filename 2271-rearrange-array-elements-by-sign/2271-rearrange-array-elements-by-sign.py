class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        
        res = [0]*len(nums)

        idx_p = 0
        idx_n = 1

        for i in range(len(nums)):
            if nums[i] > 0:
                res[idx_p] = nums[i]
                idx_p += 2
            else:
                res[idx_n] = nums[i]
                idx_n += 2
        
        return res