class q74 {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int top = 0, bottom = rows - 1;
        while (top <= bottom) {
            int mid = (top + bottom) / 2;
            if (target > matrix[mid][cols - 1]) {
                top = mid + 1;
            } else if (target < matrix[mid][0]) {
                bottom = mid - 1;
            } else {
                break;
            }
        }
        if (top > bottom) {
            return false;
        }
        int row = (top + bottom) / 2;
        int left = 0, right = cols - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (target > matrix[row][mid]) {
                left = mid + 1;
            } else if (target < matrix[row][mid]){
                right = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
}