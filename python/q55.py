class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if not nums:
            return False
        goal = len(nums) - 1
        for i in range(len(nums) - 2, -1, -1):
            if nums[i] >= goal - i:
                goal = i

        if goal == 0:
            return True
        else:
            return False

