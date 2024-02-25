//
// Created by Danny Feng on 2/23/24.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if (digits.empty()) return combinations;

        unordered_map<char, string> phoneMap{
                {'2', "abc"},
                {'3', "def"},
                {'4', "ghi"},
                {'5', "jkl"},
                {'6', "mno"},
                {'7', "pqrs"},
                {'8', "tuv"},
                {'9', "wxyz"}
        };
        string combination;

        backtrack(combinations, phoneMap, digits, 0, combination);

        return combinations;
    }

    void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
        if (index == digits.length()) {
            combinations.push_back(combination);
        } else {
            char digit = digits[index];
            const string& letters = phoneMap.at(digit);
            for (const char& letter: letters) {
                combination.push_back(letter);
                backtrack(combinations, phoneMap, digits, index + 1, combination);
                combination.pop_back();
            }
        }
    }
};

// Main function to run test cases
int main() {
    Solution solution;

    // Test cases
    vector<string> test_cases = {"23", "", "2"};
    for (const auto& digits : test_cases) {
        cout << "Input: " << digits << endl;
        vector<string> result = solution.letterCombinations(digits);
        cout << "Output: [";
        for (int i = 0; i < result.size(); ++i) {
            cout << "\"" << result[i] << "\"";
            if (i < result.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
