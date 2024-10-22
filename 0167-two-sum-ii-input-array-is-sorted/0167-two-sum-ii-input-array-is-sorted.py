import bisect

class Solution:
    def twoSum(self, nums: List[int], t: int) -> List[int]:
        
        i, j = 0, len(nums)-1

        while i < j:
            if nums[i] + nums[j] == t:
                return [i+1, j+1]
            elif nums[i] + nums[j] > t:
                j -= 1
            else:
                i += 1
            