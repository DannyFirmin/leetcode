class q875 {
    public int minEatingSpeed(int[] piles, int h) {
        int left = 1, right = 1;
        for (int pile : piles) {
            right = Math.max(right, pile);
        }

        while (left < right) {
            int m = (left + right) / 2;
            int hourSpent = 0;
            for (int pile : piles) {
                hourSpent += Math.ceil((double) pile / m);
            }
            if (hourSpent <= h) {
                right = m;
            } else {
                left = m + 1;
            }
        }
        return right;
    }
}