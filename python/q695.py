class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        ROWS, COLS = len(grid), len(grid[0])
        visit = set()

        def dfs(x, y):
            if (x < 0 or x == ROWS or y < 0 or y == COLS or grid[x][y] == 0 or (x, y) in visit):
                return 0
            visit.add((x, y))
            return (1 + dfs(x + 1, y) + dfs(x - 1, y) +  dfs(x, y + 1) + dfs(x, y - 1))

        area = 0
        for r in range(ROWS):
            for c in range(COLS):
                area = max(area, dfs(r, c))
        return area
