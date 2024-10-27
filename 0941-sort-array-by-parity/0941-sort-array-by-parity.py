class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        
        idx = 0

        for i in range(len(nums)):

            if nums[i]%2 == 0:
                nums[idx], nums[i] = nums[i], nums[idx]

                idx+=1
        return nums
