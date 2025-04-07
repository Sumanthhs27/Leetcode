class Solution:
    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        
        def is_splitable(max_balls):
            cnt = 0
            for i in nums:
                if i > max_balls:

                    # My solution was cnt += i//max_balls,  but actual solution is below
                    cnt += math.ceil(i/max_balls) - 1
                    if cnt > maxOperations:
                        return False

            return cnt <= maxOperations
        
        l, r = 1, max(nums)
        result = r

        while l <= r:
            mid = (l+r)//2
            if not is_splitable(mid):
                l = mid + 1
            else:
                result = mid 
                r = mid - 1
        
        return result