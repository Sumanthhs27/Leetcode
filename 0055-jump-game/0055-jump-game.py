class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return True
            
        max_pos = 1

        for i in range(len(nums)-1):
            if i+1 > max_pos:
                return False

            max_pos = max(max_pos, i+1 + nums[i])
            if max_pos >= len(nums):
                return True

        # if max_pos >= len(nums):
        #     return True
        return False