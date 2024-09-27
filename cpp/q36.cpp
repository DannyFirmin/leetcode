//
// Created by Danny Feng on 9/23/23.
//
#include <iostream>
#include <vector>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int rows[9][9] = {0}; // first dimension is row, second is the count
    int columns[9][9] = {0};
    int subBoxes[3][3][9] = {0}; // first is row, second is column, third is count

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            char c = board[i][j];
            if (c != '.')
            {
                int index = c - '0' - 1;
                rows[i][index]++;
                columns[j][index]++;
                subBoxes[i/3][j/3][index]++;
                if (rows[i][index] > 1 || columns[j][index] > 1 || subBoxes[i/3][j/3][index] > 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
    };

    bool result = isValidSudoku(board);
    cout << (result ? "1 true" : "1 false") << endl;

    vector<vector<char>> board2 = {
            {'8','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
    };

    result = isValidSudoku(board2);
    cout << (result ? "2 true" : "2 false") << endl;

    return 0;
}