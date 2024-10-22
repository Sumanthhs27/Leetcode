class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        res = []

        nums.sort()

        for i in range(len(nums)-2):

            if i > 0 and nums[i] == nums[i - 1]:
                continue

            target_sum = 0 - nums[i]
            
            left = i + 1
            right = len(nums) - 1

            print(i, left, right)
            while left < right:
                if nums[left] + nums[right] == target_sum:
                    res.append([nums[i], nums[left], nums[right]])
                
                    while left < right and nums[left+1] == nums[left]:
                        left += 1
                    
                    left += 1
                    right -= 1
                elif nums[left] + nums[right] > target_sum:
                    right -= 1
                else:
                    left += 1
        
        return res
