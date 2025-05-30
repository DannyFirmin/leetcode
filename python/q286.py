class Solution:
    def wallsAndGates(self, rooms: List[List[int]]) -> None:
        """
        Do not return anything, modify rooms in-place instead.
        """
        ROWS, COLS = len(rooms), len(rooms[0])
        visit = set()
        q = deque()

        def add_cell(r, c):
            if (r < 0 or c < 0 or r == ROWS or c == COLS or (r, c) in visit or rooms[r][c] == -1):
                return
            visit.add((r, c))
            q.append((r, c))

        for r in range(ROWS):
            for c in range(COLS):
                if rooms[r][c] == 0:
                    q.append((r, c))
                    visit.add((r, c))
        dist = 0
        while q:
            for i in range(len(q)):
                r, c = q.popleft()
                rooms[r][c] = dist
                add_cell(r + 1, c)
                add_cell(r - 1, c)
                add_cell(r, c + 1)
                add_cell(r, c - 1)
            dist += 1