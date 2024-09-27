//
// Created by Danny Feng on 10/11/23.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> findSummaryRanges(vector<int>& nums) {
    vector<string> result;
    for (int i = 0; i < nums.size(); i++)
    {
        int start = nums[i];
        while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1])
        {
            i++;
        }
        if (start != nums[i])
        {
            result.push_back(to_string(start) + "->" + to_string(nums[i]));
        }
        else
        {
            result.push_back(to_string(start));
        }
    }
    return result;
}

int main() {
    vector<vector<int>> test_cases = {
            {0,1,2,4,5,7},
            {0,2,3,4,6,8,9},
            {},
            {1},
            {-1,0,1,2,3,5,6,8}
    };

    for(const auto& nums : test_cases) {
        vector<string> result = findSummaryRanges(const_cast<vector<int>&>(nums));
        cout << "Input: [";
        for(int i = 0; i < nums.size(); ++i) {
            cout << nums[i] << (i == nums.size() - 1 ? "" : ",");
        }
        cout << "]\nOutput: [";
        for(int i = 0; i < result.size(); ++i) {
            cout << result[i] << (i == result.size() - 1 ? "" : ",");
        }
        cout << "]\n" << string(10, '-') << "\n";
    }

    return 0;
}