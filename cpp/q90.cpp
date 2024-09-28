//
// Created by Danny Feng on 9/27/24.
//
//
// Created by Danny Feng on 9/24/24.
//
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> path;
        backtracking(result, path, nums, 0);
        return result;
    }
    void backtracking(vector<vector<int>> &res, vector<int> &path,
                      vector<int> &nums, int index) {
        res.push_back(path);
        for (int i = index; i < nums.size(); ++i) {
            if (i == index || nums[i] != nums[i - 1]) {
                path.push_back(nums[i]);
                backtracking(res, path, nums, i + 1);
                path.pop_back();
            }
        }
    }
};