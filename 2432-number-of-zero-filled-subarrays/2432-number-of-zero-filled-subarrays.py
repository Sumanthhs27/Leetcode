class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        i=j=res=0
        n = len(nums)

        while j < n:
            while j < n and nums[j] == 0:
                j +=1
            if j < n and nums[j] != 0:
                res += ((j-i)*(j-i+1))//2
                j += 1
                i = j
        res += ((j-i)*(j-i+1))//2

        return res
                
