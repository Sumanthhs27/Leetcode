class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        n = len(nums)

        if n < 1:
            return False
        if k == 0:
            return False

        map = {}
        l,r  = 0,0

        while r < n:
            if r-l <= k:
                if map.get(nums[r]) == 1:
                    return True
                else:
                    map[nums[r]] = 1
                    r += 1
            else:
                map[nums[l]] = 0
                l+=1

                if map.get(nums[r]) == 1:
                    return True
                else:
                    map[nums[r]] = 1
                    r += 1
        
        return False



