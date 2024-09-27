//
// Created by Danny Feng on 5/30/24.
//
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            int valueToCheck = target - nums[i];
            if (hashmap.find(valueToCheck) != hashmap.end()) {
                return {hashmap[valueToCheck], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }

};