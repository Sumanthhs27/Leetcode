class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key = lambda x: (x[0], x[1]))

        res = []
        n, i = len(intervals), 0

        while i < n:
            if i+1 < n and intervals[i][1] < intervals[i+1][0]:
                res.append(intervals[i])
                i += 1
                continue
            
            start = intervals[i][0]
            end = intervals[i][1]

            while i < n and end >= intervals[i][0]:
                start = min(start, intervals[i][0])
                end = max(end, intervals[i][1])
                i += 1
            
            res.append([start, end])
        
        return res



