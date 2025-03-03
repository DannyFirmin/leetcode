class q739 {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] answer = new int[n];
        Deque<Integer> stack = new ArrayDeque<>();

        for (int currentDay = 0; currentDay < n; currentDay++) {
            int currentTemp = temperatures[currentDay];
            while (!stack.isEmpty() && temperatures[stack.peek()] < currentTemp) {
                int prevDay = stack.pop();
                answer[prevDay] = currentDay - prevDay;
            }
            stack.push(currentDay);
        }
        return answer;
    }
}