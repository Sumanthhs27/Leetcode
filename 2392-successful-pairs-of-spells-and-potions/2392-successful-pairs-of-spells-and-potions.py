class Solution:



    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        
        n = len(spells)
        m = len(potions)

        potions.sort()
        res = []

        for i in spells:
            target = success//i
            if success%i != 0:
                target += 1
            
            l, r = 0, m-1

            while l<r :
                mid = (l+r)//2

                if target > potions[mid]:
                    l = mid + 1
                else:
                    r = mid
            
            if potions[l] >= target:
                res.append(m-l)
            else:
                res.append(m-l-1)
        
        return res