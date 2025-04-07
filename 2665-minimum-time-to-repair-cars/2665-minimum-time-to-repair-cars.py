class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        
        def is_repairable(max_time):
            cars_repairable = 0
            for r in ranks:
                cars_repairable += math.floor((max_time/r)**(0.5))
            return cars_repairable >= cars
        
        l = 1
        r = result = max(ranks)*(cars**2)

        while l <= r:
            mid = (l+r)//2
            if not is_repairable(mid):
                l = mid + 1
            else:
                result = mid
                r = mid - 1
        
        return result