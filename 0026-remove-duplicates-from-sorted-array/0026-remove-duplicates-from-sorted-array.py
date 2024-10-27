class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        k = 1
        idx = 0

        for i in range(1,len(nums)):
            if nums[i] != nums[idx]:
                idx+=1
                k+=1
                nums[idx] = nums[i]
        
        return k