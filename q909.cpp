//
// Created by Danny Feng on 2/21/24.
//
#include <iostream>
#include <vector>
#include <numeric>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<pair<int, int>> cells(n * n + 1);
        int label = 1;
        vector<int> columns(n);
        iota(columns.begin(), columns.end(), 0);
        for (int row = n - 1; row >= 0; row--)
        {
            for (int column : columns)
            {
                cells[label++] = {row, column};
            }
            reverse(columns.begin(), columns.end());
        }
        vector<int> dist(n * n + 1, -1);
        queue<int> q;
        dist[1] = 0;
        q.push(1);
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            for (int next = curr + 1; next <= min(curr + 6, n * n); next++)
            {
                auto [row, column] = cells[next];
                int destination = board[row][column] != -1 ? board[row][column] : next;
                if (dist[destination] == -1)
                {
                    dist[destination] = dist[curr] + 1;
                    q.push(destination);
                }
            }
        }
        return dist[n * n];
    }
};

// Main function for running test cases
int main() {
    Solution sol;

    // Test case 1
    vector<vector<int>> board1 = {{-1,-1,-1,-1,-1,-1},
                                  {-1,-1,-1,-1,-1,-1},
                                  {-1,-1,-1,-1,-1,-1},
                                  {-1,35,-1,-1,13,-1},
                                  {-1,-1,-1,-1,-1,-1},
                                  {-1,15,-1,-1,-1,-1}};
    cout << "Test Case 1: " << sol.snakesAndLadders(board1) << endl;

    // Test case 2
    vector<vector<int>> board2 = {{-1,-1},
                                  {-1,3}};
    cout << "Test Case 2: " << sol.snakesAndLadders(board2) << endl;

    return 0;
}
