import java.util.*;

class q49 {
    public List<List<String>> groupAnagrams(String[] strs) {
        String[] sortedStrs = new String[strs.length];
        for (int i = 0 ; i < strs.length; i++) {
            char[] chars = strs[i].toCharArray();
            Arrays.sort(chars);
            sortedStrs[i] = new String(chars);
        }
        List<List<String>> result = new ArrayList<>();
        Set<String> seen = new HashSet<>();
        for (int i = 0 ; i < strs.length; i++) {
            if (seen.contains(sortedStrs[i])) {
                continue;
            }
            List<String> resultElement = new ArrayList<>();
            resultElement.add(strs[i]);
            for (int j = i + 1; j < strs.length; j++) {
                if ( sortedStrs[i].equals(sortedStrs[j])) {
                    resultElement.add(strs[j]);
                }
            }
            result.add(resultElement);
            seen.add(sortedStrs[i]);
        }
        return result;
    }
}