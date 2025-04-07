class Solution:
    def minimizedMaximum(self, n: int, quantities: List[int]) -> int:
        l, r = 1, max(quantities)
        result = r

        def can_distribute(max_quantity):
            cnt = 0
            for i in quantities:
                cnt += i//max_quantity
                if i % max_quantity != 0:
                    cnt += 1

                if cnt > n:
                    return False
            return True

        while l <= r:
            mid = (l+r)//2
            if not can_distribute(mid):
                l = mid + 1
            else:
                result = mid
                r = mid - 1

        return result