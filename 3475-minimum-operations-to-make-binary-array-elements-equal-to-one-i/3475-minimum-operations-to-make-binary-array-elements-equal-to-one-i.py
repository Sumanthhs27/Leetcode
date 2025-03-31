class Solution:
    def minOperations(self, nums: List[int]) -> int:
        
        cnt = 0

        for i in range(len(nums)):
            if nums[i] == 0:
                if i + 2 >= len(nums):
                    return -1
                nums[i] = 1
                nums[i+1] = 1 if nums[i+1] == 0 else 0
                nums[i+2] = 1 if nums[i+2] == 0 else 0
                cnt += 1
        
        return cnt