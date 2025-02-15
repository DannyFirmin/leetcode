import java.util.HashMap;
import java.util.Map;

class q242 {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        Map<Character, Integer> charCount = new HashMap<Character, Integer>();
        for (int i = 0; i < s.length(); i++) {
            Integer count = charCount.get(s.charAt(i));
            if (count == null) {
                charCount.put(s.charAt(i), 1);
            } else {
                charCount.put(s.charAt(i), ++count);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            Integer count = charCount.get(t.charAt(i));
            if (count == null) {
                return false;
            } else {
                charCount.put(t.charAt(i), --count);
            }
        }

        for (Integer count : charCount.values()) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
}