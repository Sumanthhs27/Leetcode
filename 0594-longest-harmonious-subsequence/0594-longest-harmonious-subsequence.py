class Solution:
    def findLHS(self, nums: List[int]) -> int:
        nums.sort()
        # 1 1 2 2
        # 1 2 2 2 3 3 5 7 
        l = 0
        res = 0

        for i in range(1,len(nums)):
            if nums[i] == nums[l]:
                continue 
            if nums[i] - nums[l] == 1:
                res = max(res, i-l+1)

            else:
                while l < i and nums[l] != nums[i]-1:
                    l+=1
        
        return res