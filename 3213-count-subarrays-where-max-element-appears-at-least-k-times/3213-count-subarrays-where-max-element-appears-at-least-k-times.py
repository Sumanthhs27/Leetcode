class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        n = len(nums)
        maxi = max(nums)
        res = l = max_ele_cnt = 0

        for r in range(n):
            if nums[r] == maxi:
                max_ele_cnt += 1

            while max_ele_cnt >= k and l <= r:
                if nums[l] == maxi:
                    max_ele_cnt -= 1
                l += 1
            # print(f"adding: {r-l+1}")
            res += r - l + 1
        
        # print(f"res: {res}")
        return (n*(n+1))//2 - res
