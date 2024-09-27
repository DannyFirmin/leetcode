//
// Created by Danny Feng on 5/14/24.
//
#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int writer = 0;
    for (int reader = 0; reader < nums.size(); reader++) {
        if (nums[reader] != val) {
            nums[writer] = nums[reader];
            writer++;
        }
    }
    return writer;
}

// Main function for testing
int main() {
    // Test case 1
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    cout << "Test Case 1:\nInput: nums = [3, 2, 2, 3], val = 3\nOutput: ";
    int result1 = removeElement(nums1, val1);
    cout << result1 << ", nums = [";
    for (int i = 0; i < result1; ++i) {
        cout << nums1[i];
        if (i != result1 - 1) cout << ", ";
    }
    cout << "]\n\n";

    // Test case 2
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    cout << "Test Case 2:\nInput: nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2\nOutput: ";
    int result2 = removeElement(nums2, val2);
    cout << result2 << ", nums = [";
    for (int i = 0; i < result2; ++i) {
        cout << nums2[i];
        if (i != result2 - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}
