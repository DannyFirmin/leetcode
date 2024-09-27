//
// Created by Danny Feng on 9/12/23.
//
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string processedStr;
        for (char i : s)
        {
            if(isalnum(i))
            {
                processedStr += tolower(i);
            }
        }
        int headPtr = 0;
        int tailPtr = processedStr.size() - 1;
        while (headPtr != tailPtr && headPtr < tailPtr)
        {
            if (processedStr[headPtr] != processedStr[tailPtr])
            {
                return false;
            }
            headPtr++;
            tailPtr--;
        }
        return true;
    }

};

int main() {
    Solution solution;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";
    string test4 = "abcba";
    string test5 = "1a2";

    cout << "Test 1: " << (solution.isPalindrome(test1) ? "true" : "false") << endl;
    cout << "Test 2: " << (solution.isPalindrome(test2) ? "true" : "false") << endl;
    cout << "Test 3: " << (solution.isPalindrome(test3) ? "true" : "false") << endl;
    cout << "Test 4: " << (solution.isPalindrome(test4) ? "true" : "false") << endl;
    cout << "Test 5: " << (solution.isPalindrome(test5) ? "true" : "false") << endl;

    return 0;
}