//
// Created by Danny Feng on 2/27/24.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> heap;

    for (int num: nums) {
        heap.push(-num);
        if (heap.size() > k) {
            heap.pop();
        }
    }
    return -heap.top();
}

int main() {
    // Test cases
    vector<vector<int>> testCases = {
            {3, 2, 1, 5, 6, 4},
            {3, 2, 3, 1, 2, 4, 5, 5, 6}
    };

    vector<int> ks = {2, 4};

    for (size_t i = 0; i < testCases.size(); ++i) {
        cout << "Test Case " << i+1 << ":" << endl;
        cout << "Input: ";
        for (int num : testCases[i]) {
            cout << num << " ";
        }
        cout << endl;
        cout << "k: " << ks[i] << endl;
        cout << "Output: " << findKthLargest(testCases[i], ks[i]) << endl;
        cout << endl;
    }

    return 0;
}
