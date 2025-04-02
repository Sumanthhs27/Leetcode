class Solution:
    def mergeArrays(self, n1: List[List[int]], n2: List[List[int]]) -> List[List[int]]:
        n,m = len(n1), len(n2)
        res = []
        i = j = 0

        while i<n and j<m:
            if n1[i][0] == n2[j][0]:
                res.append([ n1[i][0], n1[i][1] + n2[j][1] ])
                i += 1
                j += 1
            elif n1[i][0] < n2[j][0]:
                res.append(n1[i])
                i += 1
            else:
                res.append(n2[j])
                j += 1
            
        while i<n:
            res.append(n1[i])
            i += 1

        while j<m:
            res.append(n2[j])
            j += 1
        
        return res