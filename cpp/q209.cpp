//
// Created by Danny Feng on 9/13/23.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int subArrStartIndex = 0;
        int subArrSize = 1;
        if (nums.empty())
        {
            return 0;
        }
        while (subArrSize <= nums.size()) {
            while (subArrStartIndex + subArrSize <= nums.size() ) {
                int subArrSum = 0;
                for (int i = subArrStartIndex; i <= subArrStartIndex + subArrSize - 1; i++)
                {
                    subArrSum += nums[i];
                }
                if (subArrSum >= target)
                {
                    return subArrSize;
                }
                subArrStartIndex++;
            }
            subArrStartIndex = 0;
            subArrSize++;
        }
        return 0;
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