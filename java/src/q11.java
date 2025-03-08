class q11 {
    public int maxArea(int[] height) {
        int maxArea = 0;
        int left = 0;
        int right = height.length - 1;
        while (left < right) {
            if (height[left] < height[right]) {
                int area = (right - left) * height[left];
                maxArea = Math.max(area, maxArea);
                left++;
            } else {
                int area = (right - left) * height[right];
                maxArea = Math.max(area, maxArea);
                right--;
            }
        }
        return maxArea;
    }
}