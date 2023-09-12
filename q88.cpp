//
// Created by Danny Feng on 9/11/23.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> resultVector;
        int nums1_ptr = 0;
        int nums2_ptr = 0;
        bool nums1_consumed = false;
        bool nums2_consumed = false;
// nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//              |                           |
//   resultVector = [1, 2, 2, 3, ]
        if (n == 0)
        {
            // nums1 is the answer
            return;
        }
        if (m == 0)
        {
            // nums1 is empty, nums2 is not. mums2 is the answer, move it to nums1
            for (int i = 0; i < nums2.size(); i++)
            {
                nums1[i] = nums2[i];
            }
            return;
        }
        while (nums1_ptr < m || nums2_ptr < n)
        {
            if (nums1[nums1_ptr] <= nums2[nums2_ptr])
            {
                resultVector.push_back(nums1[nums1_ptr]);
                if (nums1_ptr < m - 1)
                {
                    nums1_ptr++;
                }
                else
                {
                    nums1_consumed = true;
                }
            }
            else
            {
                resultVector.push_back(nums2[nums2_ptr]);
                if (nums2_ptr < n - 1)
                {
                    nums2_ptr++;
                }
                else
                {
                    nums2_consumed = true;
                }
            }
            if (nums1_consumed)
            {
                for (int i = nums2_ptr; i < n; i++)
                {
                    resultVector.push_back(nums2[i]);
                }
                break;
            }
            if (nums2_consumed)
            {
                for (int i = nums1_ptr; i < m; i++)
                {
                    resultVector.push_back(nums1[i]);
                }
                break;
            }
        }
        // Overwrite nums1 with the result
        for (int i = 0; i < nums1.size(); i++)
        {
            nums1[i] = resultVector[i];
        }
    }
};

int main() {
    // Example usage:
    vector<int> nums1 = {1,2,4,5,6,0};
    vector<int> nums2 = {3};
    int m = 5; // Number of elements in nums1
    int n = 1; // Number of elements in nums2

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}