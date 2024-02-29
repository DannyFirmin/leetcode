//
// Created by Danny Feng on 2/28/24.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    string ans;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n = max(a.size(), b.size()), carry = 0;
    for (size_t i = 0; i < n; ++i) {
        carry += i < a.size() ? (a.at(i) == '1') : 0;
        carry += i < b.size() ? (b.at(i) == '1') : 0;
        ans.push_back((carry % 2) ? '1' : '0');
        carry /= 2;
    }
    if (carry) {
        ans.push_back('1');
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// Test cases
int main() {
    // Test case 1
    string a1 = "11";
    string b1 = "1";
    cout << "Test case 1: " << addBinary(a1, b1) << endl;

    // Test case 2
    string a2 = "1010";
    string b2 = "1011";
    cout << "Test case 2: " << addBinary(a2, b2) << endl;

    return 0;
}
