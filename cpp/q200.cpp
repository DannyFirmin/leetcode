//
// Created by Danny Feng on 2/20/24.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;

        int count = 0;

        int rows = grid.size();
        int cols = grid[0].size();

        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < cols; ++col)
            {
                if (grid[row][col] == '1')
                {
                    count++;
                    dfs(grid, row, col);
                }
            }
        }

        return count;
    }

    void dfs(vector<vector<char>>& grid, int row, int col) {
        int rows = grid.size();
        int cols = grid[0].size();

        if (row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] != '1') return;

        grid[row][col] = '0'; // Mark as visited

        dfs(grid, row + 1, col);
        dfs(grid, row - 1, col);
        dfs(grid, row, col + 1);
        dfs(grid, row, col - 1);
    }
};

int main() {
    Solution sol;
    vector<vector<char>> grid1 = {
            {'1','1','1','1','0'},
            {'1','1','0','1','0'},
            {'1','1','0','0','0'},
            {'0','0','0','0','0'}
    };

    vector<vector<char>> grid2 = {
            {'1','1','0','0','0'},
            {'1','1','0','0','0'},
            {'0','0','1','0','0'},
            {'0','0','0','1','1'}
    };

    cout << "Number of islands in grid 1: " << sol.numIslands(grid1) << endl;
    cout << "Number of islands in grid 2: " << sol.numIslands(grid2) << endl;

    return 0;
}