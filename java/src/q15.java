import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class q15 {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();
        // If the current value is greater than zero, break from the loop. Remaining values cannot sum to zero.
        for (int i = 0; i < nums.length && nums[i] <= 0; ++i) {
            if (i == 0 || nums[i - 1] != nums[i]) {
                twoSumII(nums, i, result);
            }
        }
        return result;
    }
    void twoSumII(int[] nums, int i, List<List<Integer>> res) {
        int lo = i + 1, hi = nums.length - 1;
        while (lo < hi) {
            int sum = nums[i] + nums[lo] + nums[hi];
            if (sum < 0) {
                ++lo;
            } else if (sum > 0) {
                --hi;
            } else {
                res.add(Arrays.asList(nums[i], nums[lo++], nums[hi--]));
                // Increment lo while the next value is the same as before to avoid duplicates in the result.
                while (lo < hi && nums[lo] == nums[lo - 1]) ++lo;
            }
        }
    }
}