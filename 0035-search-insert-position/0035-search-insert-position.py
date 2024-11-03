class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        l, r = 0, len(nums)-1

        while l<=r:
            mid = (l+r)//2

            if nums[mid] == target:
                return mid
            elif target > nums[mid]:
                l = mid + 1
            else:
                r = mid - 1

        if l < 0: return 0
        if l == len(nums): return l
        else:
            if target <= nums[l]: return l
            else: return l+1