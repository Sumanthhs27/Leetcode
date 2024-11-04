import copy

class Solution:

    def canEat(self, k, h, piles):
        cnt = 0

        for i in piles:
            temp = i//k
            
            if i%k !=0:
                temp += 1
            
            cnt += temp

            if cnt > h:
                return False
        
        return True


    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        r = max(piles)
        l = max(sum(piles) // h, 1)
        temp_h = h

        while l < r:
            mid = (l+r)//2
            print(f"L: {l}, R: {r}, Mid: {mid}")

            if not self.canEat(mid, h, piles):
                print("Cant eat")
                l = mid + 1
            else:
                print("can eat")
                r = mid
        
        return l
