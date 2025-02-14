import java.util.HashSet;
import java.util.Set;

class q217 {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        for (int i : nums) {
            if (seen.contains(i)) return true;
            seen.add(i);
        }
        return false;
    }
}