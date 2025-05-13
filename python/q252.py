class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        if not intervals:
            return True
        intervals.sort()
        prevStart = intervals[0][0]
        prevEnd = intervals[0][1]
        for start, end in intervals[1:]:
            if prevEnd > start and prevEnd <= end:
                return False
            if prevStart < end and prevStart >= start:
                return False
            if end > prevStart and end <= prevEnd:
                return False
            if start < prevEnd and start >= prevStart:
                return False
            prevStart = start
            prevEnd = end
        return True

