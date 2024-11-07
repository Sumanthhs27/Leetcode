import copy

class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        
        res = [[]]
        curr = []

        def helper(nums, curr, idx, res):

            if idx >= len(nums):
                return
            
            curr.append(nums[idx])
            res.append(copy.deepcopy(curr))
            helper(nums, curr, idx+1, res)
            curr.pop()

            helper(nums, curr, idx+1, res)

        helper(nums, curr, 0, res)
        return res
