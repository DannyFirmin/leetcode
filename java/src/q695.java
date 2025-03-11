class q695 {

    static final int[][] dir = {{0,1},{1,0},{0,-1},{-1,0}};
    static int count = 0;

    public int maxAreaOfIsland(int[][] grid) {
        int result = 0;
        boolean[][] visited = new boolean[grid.length][grid[0].length];
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (!visited[i][j] && grid[i][j] == 1){
                    count = 0;
                    dfs(grid,visited,i,j);
                    result = Math.max(count, result);
                }
            }
        }
        return result;
    }
    static void dfs(int[][] map,boolean[][] visited,int x,int y){
        count++;
        visited[x][y] = true;
        for (int i = 0; i < 4; i++) {
            int nextX = x + dir[i][0];
            int nextY = y + dir[i][1];
            //skip water or visited
            if(nextX < 0 || nextY < 0
                    || nextX >= map.length || nextY >= map[0].length
                    || visited[nextX][nextY] || map[nextX][nextY] == 0) continue;

            dfs(map,visited,nextX,nextY);
        }
    }
}