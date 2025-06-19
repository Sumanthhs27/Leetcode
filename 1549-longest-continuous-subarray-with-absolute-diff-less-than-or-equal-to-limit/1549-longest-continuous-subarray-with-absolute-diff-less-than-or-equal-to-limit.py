from collections import deque

class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        max_d = deque()
        min_d = deque()
        i = 0
        res = 0

        for j in range(len(nums)):
            while max_d and nums[j] > max_d[-1]:
                max_d.pop()
            max_d.append(nums[j])

            while min_d and nums[j] < min_d[-1]:
                min_d.pop()
            min_d.append(nums[j])

            while max_d[0] - min_d[0] > limit:
                if max_d[0] == nums[i]:
                    max_d.popleft()
                if min_d[0] == nums[i]:
                    min_d.popleft()
                i += 1

            res = max(res, j - i + 1)

        return res
