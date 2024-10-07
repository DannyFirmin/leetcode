//
// Created by Danny Feng on 10/6/24.
//
class Solution {
private:
    bool backtracking(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {        // loop row
            for (int j = 0; j < board[0].size(); j++) { // loop column
                if (board[i][j] == '.') {
                    for (char k = '1'; k <= '9'; k++) {     // is it ok to place k at (i, j)
                        if (isValid(i, j, k, board)) {
                            board[i][j] = k;                // place k
                            if (backtracking(board)) return true; // 如果找到合适一组立刻返回
                            board[i][j] = '.';              // cancel placing k
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isValid(int row, int col, char val, vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == val) { // check repeat in row
                return false;
            }
        }
        for (int j = 0; j < 9; j++) {
            if (board[j][col] == val) { // check repeat in column
                return false;
            }
        }
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) { // check repeat around the cells
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == val ) {
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};