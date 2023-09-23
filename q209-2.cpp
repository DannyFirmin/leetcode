//
// Created by Danny Feng on 9/14/23.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int subArrStartIndex = 0, subArrEndIndex = 0;
        int subArrMinLen = INT_MAX;
        int subArrSum = 0;
        if (nums.empty())
        {
            return 0;
        }

        while (subArrEndIndex < nums.size())
        {
            subArrSum += nums[subArrEndIndex];
            while (subArrSum >= target)
            {
                subArrMinLen = min(subArrMinLen, subArrEndIndex - subArrStartIndex + 1);
                subArrSum -= nums[subArrStartIndex];
                subArrStartIndex++;
            }
            subArrEndIndex++;
        }
        return subArrMinLen == INT_MAX ? 0: subArrMinLen;
    }
};
int main() {

    int target1 = 7;
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    Solution solution;
    int result1 = solution.minSubArrayLen(target1, nums1);
    cout << "Output 1: " << result1 << endl;

    int target2 = 4;
    vector<int> nums2 = {1, 4, 4};
    int result2 = solution.minSubArrayLen(target2, nums2);
    cout << "Output 2: " << result2 << endl;

    int target3 = 11;
    vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
    int result3 = solution.minSubArrayLen(target3, nums3);
    cout << "Output 3: " << result3 << endl;

    return 0;
}