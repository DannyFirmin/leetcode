//
// Created by Danny Feng on 10/4/24.
//
class Solution {
private:
    vector<vector<string>> result;
// n = board size
    void backtracking(int n, int row, vector<string>& chessboard) {
        if (row == n) {
            result.push_back(chessboard);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isValid(row, col, chessboard, n)) {
                chessboard[row][col] = 'Q'; // place the queen
                backtracking(n, row + 1, chessboard);
                chessboard[row][col] = '.'; // backtrack un-place queen
            }
        }
    }
    bool isValid(int row, int col, vector<string>& chessboard, int n) {
        // check vertical
        for (int i = 0; i < row; i++) { // prune
            if (chessboard[i][col] == 'Q') {
                return false;
            }
        }
        // check queen in the 45 degree
        for (int i = row - 1, j = col - 1; i >=0 && j >= 0; i--, j--) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }
        // check queen in the 135 degree
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        result.clear();
        std::vector<std::string> chessboard(n, std::string(n, '.'));
        backtracking(n, 0, chessboard);
        return result;
    }
};
