/*
 * Problem: 153. Find Minimum in Rotated Sorted Array
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/2018699678/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
