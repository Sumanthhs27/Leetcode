class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        n = len(nums)
        if n == 3:
            return sum(nums)

        nums.sort()
        print(nums)
        res = sum(nums[:3])

        for i in range(n-2):
            l,r = i+1, n-1
            while l<r:
                sum_ = nums[i] + nums[l] + nums[r]
                if sum_ == target:
                    return sum_
                if abs(sum_ - target) < abs(res - target):
                    # print(f"res: {res}, nums[i]: {nums[i]}, nums[l]: {nums[l]}, nums[r]: {nums[r]}")
                    res = sum_
                
                if sum_ > target:
                    r -= 1
                else:
                    l += 1
        
        return res



        