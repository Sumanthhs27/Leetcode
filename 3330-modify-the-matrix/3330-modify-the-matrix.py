class Solution:
    def modifiedMatrix(self, g: List[List[int]]) -> List[List[int]]:
        
        max_ele = []

        for j in range(len(g[0])):
            maxi = -1
            for i in range(len(g)):

                maxi = max(maxi, g[i][j])
            
            max_ele.append(maxi)
        
        print(max_ele)

        res = []

        for i in range(len(g)):
            lis = []
            for j in range(len(g[0])):
                
                if g[i][j] != -1:
                    lis.append(g[i][j])
                else:
                    lis.append(max_ele[j])
            res.append(lis)
        
        return res