//
// Created by Danny Feng on 3/1/24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();

    // Bottom-up approach to start from the second last row
    for (int i = n - 2; i >= 0; i--) {
        // Update each element in the current row with the minimum sum path
        for (int j = 0; j <= i; j++) {
            triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    // The top element will have the minimum path sum after the above process
    return triangle[0][0];
}

int main() {
    // Test cases
    vector<vector<int>> triangle1 = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout << "Minimum path sum for example 1: " << minimumTotal(triangle1) << endl;

    vector<vector<int>> triangle2 = {{-10}};
    cout << "Minimum path sum for example 2: " << minimumTotal(triangle2) << endl;

    return 0;
}
