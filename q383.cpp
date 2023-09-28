//
// Created by Danny Feng on 9/27/23.
//
#include <iostream>
#include <unordered_map>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> charCount;
    for (char i : magazine)
    {
        charCount[i]++;
    }
    for (char i : ransomNote)
    {
        if (charCount.find(i) != charCount.end() && charCount[i] > 0)
        {
            charCount[i]--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main() {
    string ransomNote1 = "a", magazine1 = "b";
    string ransomNote2 = "aa", magazine2 = "ab";
    string ransomNote3 = "aa", magazine3 = "aab";

    cout << canConstruct(ransomNote1, magazine1) << endl; // Output: false
    cout << canConstruct(ransomNote2, magazine2) << endl; // Output: false
    cout << canConstruct(ransomNote3, magazine3) << endl; // Output: true

    return 0;
}