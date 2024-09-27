//
// Created by Danny Feng on 2/25/24.
//
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main() {
    // Test cases
    vector<vector<int>> testCases = {
            {-2, 1, -3, 4, -1, 2, 1, -5, 4},
            {1},
            {5, 4, -1, 7, 8}
    };

    for (auto& nums : testCases) {
        cout << "Input: ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
        cout << "Output: " << maxSubArray(nums) << endl;
        cout << "----------------------------------" << endl;
    }

    return 0;
}
