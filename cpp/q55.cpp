//
// Created by Danny Feng on 10/10/24.
//
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover = 0;
        if (nums.size() == 1) return true;
        for (int i = 0; i <= cover; i++) {
            cover = max(i + nums[i], cover);
            if (cover >= nums.size() - 1) return true;
        }
        return false;
    }
};