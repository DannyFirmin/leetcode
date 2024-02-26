//
// Created by Danny Feng on 2/26/24.
//
#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;

    return left;
}

int main() {
    // Test cases
    vector<vector<int>> test_cases_nums = {{1,3,5,6}, {1,3,5,6}, {1,3,5,6}};
    vector<int> targets = {5, 2, 7};

    for (int i = 0; i < test_cases_nums.size(); ++i) {
        int result = searchInsert(test_cases_nums[i], targets[i]);
        cout << "For nums = [";
        for (int j = 0; j < test_cases_nums[i].size(); ++j) {
            cout << test_cases_nums[i][j];
            if (j != test_cases_nums[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "] and target = " << targets[i] << ", Output: " << result << endl;
    }

    return 0;
}
