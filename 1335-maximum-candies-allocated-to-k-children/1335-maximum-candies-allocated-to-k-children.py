class Solution:
    def maximumCandies(self, candies: List[int], k: int) -> int:
        
        if sum(candies) < k:
            return 0

        def can_allocate(max_candies):
            children_cnt = 0
            for i in candies:
                children_cnt += i//max_candies
                if children_cnt == k:
                    return True

            return children_cnt >= k


        l,r = 1, max(candies)
        result = l

        while l <= r:
            mid = (l+r)//2

            if not can_allocate(mid):
                r = mid - 1
            else:
                result = mid
                l = mid + 1
        
        return result