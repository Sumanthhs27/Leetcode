class Solution:
    def isPossibleToSplit(self, nums: List[int]) -> bool:
        
        map = {}

        for i in nums:
            if str(i) not in map:
                map[str(i)] = 1
            else:
                map[str(i)] += 1

                if map[str(i)] >= 3:
                    return False
            print(map)
        return True