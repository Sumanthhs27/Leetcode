
def mark_grid(grid, m,n, i_start, j_start):
    dx = [0,0,1,-1]
    dy = [1,-1,0,0]

    for x_, y_ in zip(dx,dy):
        i, j = i_start + x_, j_start + y_
        while i >= 0 and i < m and j >=0 and j < n:
            if grid[i][j] in ["W", "G"]:
                break
            grid[i][j] = 1
            i += x_
            j += y_
    

class Solution:
    def countUnguarded(self, m: int, n: int, guards: List[List[int]], walls: List[List[int]]) -> int:
        grid = [[0 for _ in range(n)] for _ in range(m)]
        
        for g in guards:
            grid[g[0]][g[1]] = "G"
        for w in walls:
            grid[w[0]][w[1]] = "W"

        for g in guards:
            mark_grid(grid, m,n,g[0], g[1])
        
        # return sum([1 if grid[i][j] == 0 else 0 for j in range(n) for i in range(m)])  --> This will create new list and then take the sum of it
        return sum(1 for i in range(m) for j in range(n) if grid[i][j] == 0)