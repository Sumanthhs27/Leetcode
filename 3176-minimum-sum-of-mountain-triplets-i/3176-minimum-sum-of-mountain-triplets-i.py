class Solution:
    def minimumSum(self, nums: List[int]) -> int:
        n = len(nums)
        s = [0]*n
        p = [0]*n

        p[0] = nums[0]
        s[n-1] = nums[n-1]

        for i in range(1, n):
            p[i] = min(nums[i], p[i-1])
        

        for j in range(n-2, -1, -1):
            s[j] = min(nums[j], s[j+1])

        print(p)
        print(s)
        res = -1
        
        for i in range(1, n-1):
            if nums[i] > p[i] and nums[i] > s[i]:
                if res == -1:
                    res = nums[i] + s[i] + p[i]
                else:
                    res = min(res, nums[i] + s[i] + p[i])
        return res