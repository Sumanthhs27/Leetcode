class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        n,m = len(mat), len(mat[0])
        mp = {}
        for i in range(len(arr)):
            mp[arr[i]] = i
        
        # print(mp)
        res = m*n

        for i in range(n):
            curr_max = -1
            for j in range(m):
                curr_max = max(curr_max, mp[mat[i][j]])
            res = min(res, curr_max)
        
        for j in range(m):
            curr_max = -1
            for i in range(n):
                curr_max = max(curr_max, mp[mat[i][j]])
            res = min(res, curr_max)
        
        return res
