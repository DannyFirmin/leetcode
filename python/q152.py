class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if not nums:
            return 0

        max_prod = nums[0]
        min_prod = nums[0]
        result = nums[0]

        for i in range(1, len(nums)):
            current = nums[i]
            tmp = current * max_prod
            max_prod = max(current, max_prod * current, min_prod * current)
            min_prod = min(current, tmp, min_prod * current)

            result = max(result, max_prod)

        return result