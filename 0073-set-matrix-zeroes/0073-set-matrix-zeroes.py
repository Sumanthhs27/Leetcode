class Solution:
    def setZeroes(self, grid: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        if not grid:
            return
        
        rows, cols = len(grid), len(grid[0])
        first_row_zero = any(grid[0][j] == 0 for j in range(cols))
        first_col_zero = any(grid[i][0] == 0 for i in range(rows))

        # Step 1: Mark rows and cols for zeroing
        for i in range(1, rows):
            for j in range(1, cols):
                if grid[i][j] == 0:
                    grid[i][0] = 0
                    grid[0][j] = 0
        
        # Step 2: Set zeroes based on markers
        for i in range(1, rows):
            if grid[i][0] == 0:
                for j in range(1, cols):
                    grid[i][j] = 0
        
        for j in range(1, cols):
            if grid[0][j] == 0:
                for i in range(1, rows):
                    grid[i][j] = 0

        # Step 3: Handle first row and first column separately
        if first_row_zero:
            for j in range(cols):
                grid[0][j] = 0

        if first_col_zero:
            for i in range(rows):
                grid[i][0] = 0
                