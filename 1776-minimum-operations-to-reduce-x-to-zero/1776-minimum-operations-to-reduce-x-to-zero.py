class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        
        target_subarray_sum = sum(nums) - x
        if target_subarray_sum < 0: return -1
        if target_subarray_sum == 0: return len(nums)

        l = sum_ = 0
        max_subarray_len = -1

        # print(f"target_subarray_sum: {target_subarray_sum}")

        for r in range(len(nums)):
            sum_ += nums[r]

            while sum_ > target_subarray_sum and l<r:
                sum_ -= nums[l]
                l += 1

            # print(f"sum: {sum_}, l_ele: {nums[l]}, r_ele: {nums[r]}")
            if sum_ == target_subarray_sum:
                max_subarray_len = max(max_subarray_len, r-l+1)
        
        return len(nums)-max_subarray_len if max_subarray_len != -1 else -1