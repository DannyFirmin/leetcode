class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        maxHeap = [-x for x in stones]
        heapq.heapify(maxHeap)
        while (len(maxHeap) > 1):
            largest = -heapq.heappop(maxHeap)
            if (len(maxHeap) >= 1):
                secondLargest = -heapq.heappop(maxHeap)
            else:
                secondLargest = largest
            if (largest != secondLargest):
                heapq.heappush(maxHeap, -(largest - secondLargest))
        if (len(maxHeap) == 0):
            return 0
        else:
            return -maxHeap[0]
