class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        direction = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        ROWS, COLS = len(grid), len(grid[0])
        island = 0
        visited = set()

        def bfs(x, y):
            q = deque()
            visited.add((x, y))
            q.append((x, y))
            while q:
                cur_x, cur_y = q.popleft()
                for dx, dy in direction:
                    next_x = cur_x + dx
                    next_y = cur_y + dy
                    if next_x < 0 or next_y < 0 or next_x >= ROWS or next_y >= COLS:
                        continue
                    if grid[next_x][next_y] == "1" and (next_x, next_y) not in visited:
                        q.append((next_x, next_y))
                        visited.add((next_x, next_y))

        for x in range(ROWS):
            for y in range(COLS):
                if grid[x][y] == "1" and (x, y) not in visited:
                    bfs(x, y)
                    island += 1
        return island
