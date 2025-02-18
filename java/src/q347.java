class q347 {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> numsCount = new HashMap<>();
        for (int n : nums) {
            numsCount.put(n, numsCount.getOrDefault(n, 0) + 1);
        }

        List<Integer>[] freq = new List[nums.length + 1];
        // index is count, each element is an arraylist of num
        for (int i = 0; i < freq.length; i++) {
            freq[i] = new ArrayList<>();
        }

        for (var entry : numsCount.entrySet()) {
            freq[entry.getValue()].add(entry.getKey());
        }
        int[] result = new int[k];
        int index = 0;
        for (int i = freq.length - 1; i > 0 && index < k; i--) {
            for (int n : freq[i]) {
                result[index++] = n;
                if (index == k) {
                    return result;
                }
            }
        }
        return result;
    }
}