//
// Created by Danny Feng on 1/9/24.
//
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;
        for (char c:s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (!st.empty() && st.top() == mapping[c])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution solution;

    // Example 1
    cout << "Example 1: " << (solution.isValid("()") ? "true" : "false") << endl;

    // Example 2
    cout << "Example 2: " << (solution.isValid("()[]{}") ? "true" : "false") << endl;

    // Example 3
    cout << "Example 3: " << (solution.isValid("(]") ? "true" : "false") << endl;

    return 0;
}