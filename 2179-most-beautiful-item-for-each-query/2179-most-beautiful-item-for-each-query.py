class Solution:
    def maximumBeauty(self, items: List[List[int]], queries: List[int]) -> List[int]:
        
        items.sort(key = lambda x: (x[0], x[1]))
        maxi = 0

        for i in items:
            maxi = max(maxi, i[1])
            i[1] = maxi

        res = [0]*len(queries)

        for idx, i in enumerate(queries):
            l,r = 0, len(items)-1

            while l <= r:
                mid = (l+r)//2

                if items[mid][0] <= i:
                    res[idx] = items[mid][1]
                    l = mid + 1
                else:
                    r = mid - 1

        return res