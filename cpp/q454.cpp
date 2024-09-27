//
// Created by Danny Feng on 6/1/24.
//
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> hashmap;
        for (int a: nums1) {
            for (int b: nums2) {
                hashmap[a+b]++;
            }
        }
        int count = 0;
        for (int c: nums3) {
            for (int d: nums4){
                if (hashmap.find(0 - (c + d)) != hashmap.end()) {
                    count += hashmap[0 - (c + d)];
                }
            }
        }
        return count;
    }
};