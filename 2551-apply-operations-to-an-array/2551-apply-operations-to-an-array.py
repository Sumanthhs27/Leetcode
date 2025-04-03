class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        n, i = len(nums), 0
        
        while i < n-1:
            if nums[i] == nums[i+1]:
                nums[i] *= 2
                nums[i+1] = 0
                i += 1
            
            i += 1
            
        pos = 0
        for i in range(n):
            if nums[i] != 0:
                nums[pos], nums[i] = nums[i], nums[pos]
                pos += 1
        
        return nums