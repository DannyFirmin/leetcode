//
// Created by Danny Feng on 5/15/24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (auto& elem : nums) {
        elem = pow(elem, 2);
    }
    std::sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<vector<int>> testCases = {
            {-4,-1,0,3,10},
            {-7,-3,2,3,11}
    };

    for (auto& nums : testCases) {
        cout << "Input: ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
        vector<int> result = sortedSquares(nums);
        cout << "Output: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl << endl;
    }

    return 0;
}
