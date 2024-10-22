
class Solution:
    def twoSum(self, arr: List[int], t: int) -> List[int]:
        
        map = {}

        for i in range(len(arr)):
            if t - arr[i] in map:
                return [map[t-arr[i]], i]
            
            map[arr[i]] = i
            
        


        
