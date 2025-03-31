import heapq
from collections import Counter

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        min_heap = []
        mp = Counter(nums)

        for key, value in mp.items():
            heapq.heappush(min_heap, (value, key))

            if len(min_heap) > k:
                heapq.heappop(min_heap)
        
        return [i[1] for i in min_heap]

        