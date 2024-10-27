class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        
        idx = 0

        for i in range(len(nums)):

            if nums[i]%2 == 0:
                temp = nums[idx]
                nums[idx] = nums[i]
                nums[i] = temp

                idx+=1
        return nums
