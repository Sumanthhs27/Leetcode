class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        n = len(nums)
        if n < 2:
            return False

        mp = {0:0}
        curr_sum = 0

        for i in range(n):
            curr_sum += nums[i]
            curr_rem = curr_sum % k

            if curr_rem not in mp:
                mp[curr_rem] = i+1
            elif i+1 - mp[curr_rem] > 1:
                return True
        
        return False