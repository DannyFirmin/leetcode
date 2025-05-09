class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        freq = Counter(tasks)
        max_heap = [-count for count in freq.values()]
        heapq.heapify(max_heap)
        cooldown_queue = deque()
        time = 0
        while max_heap or cooldown_queue:
            time += 1
            if max_heap:
                count = heapq.heappop(max_heap)
                count = -count - 1
                if count > 0:
                    cooldown_queue.append((time + n, count))
            if cooldown_queue and cooldown_queue[0][0] == time:
                heapq.heappush(max_heap, -cooldown_queue.popleft()[1])
        return time

