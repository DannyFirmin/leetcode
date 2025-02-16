import java.util.HashMap;
import java.util.Map;

class q1 {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numsPos = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            numsPos.put(nums[i], i);
        }
        for (int i = 0; i < nums.length; i++) {
            Integer second = numsPos.get(target - nums[i]);
            if (second != null && second != i ) {
                int[] result = {i, second};
                return result;
            }
        }
        return new int[]{};
    }
}