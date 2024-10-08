//
// Created by Danny Feng on 10/7/24.
//
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int index = s.size() - 1; // cookie index
        int result = 0;
        for (int i = g.size() - 1; i >= 0; i--) { // loop kids
            if (index >= 0 && s[index] >= g[i]) { // loop cookie
                result++;
                index--;
            }
        }
        return result;
    }
};