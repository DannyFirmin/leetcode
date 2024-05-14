//
// Created by Danny Feng on 5/13/24.
//
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    // Test cases
    vector<vector<int>> numsList = {{-1,0,3,5,9,12}, {-1,0,3,5,9,12}};
    vector<int> targets = {9, 2};

    for (int i = 0; i < numsList.size(); ++i) {
        cout << "Example " << i + 1 << ":" << endl;
        int result = binarySearch(numsList[i], targets[i]);
        cout << "Input: nums = [";
        for (int j = 0; j < numsList[i].size(); ++j) {
            cout << numsList[i][j];
            if (j != numsList[i].size() - 1)
                cout << ",";
        }
        cout << "], target = " << targets[i] << endl;
        cout << "Output: " << result << endl;
        cout << "Explanation: ";
        if (result != -1)
            cout << targets[i] << " exists in nums and its index is " << result << endl;
        else
            cout << targets[i] << " does not exist in nums so return -1" << endl;
        cout << endl;
    }

    return 0;
}
