class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)

        # Step 1: Place each number at its correct index
        for i in range(n):
            while 1 <= nums[i] <= n and nums[nums[i] - 1] != nums[i]:
                nums[nums[i] - 1], nums[i] = nums[i], nums[nums[i] - 1]  # Swap

        # Step 2: Find the first missing positive
        for i in range(n):
            if nums[i] != i + 1:
                return i + 1

        return n + 1  # If all are in place, return next positive number