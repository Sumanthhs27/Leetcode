class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        # cnt = 1
        # n = len(nums)

        # idx = 0
        # res = 1

        # for i in range(1,n):
        #     if nums[i] != nums[idx]:
        #         idx += 1
        #         nums[idx], nums[i] = nums[i], nums[idx]
        #         print(nums)
        #         res += 1
        #         cnt = 1
            
        #     else:
        #         if cnt < 2:
        #             res += 1
        #             idx += 1
        #             cnt += 1
        #             nums[idx], nums[i] = nums[i], nums[idx]
        # return res

        if len(nums) < 2: return len(nums)
        slow, fast = 2, 2

        while fast < len(nums):
            if nums[slow - 2] != nums[fast]:
                nums[slow] = nums[fast]
                slow += 1
            fast += 1
        return slow

