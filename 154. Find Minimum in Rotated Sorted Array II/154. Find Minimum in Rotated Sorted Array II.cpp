/*
 * Problem: 154. Find Minimum in Rotated Sorted Array II
 * Difficulty: Hard
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/submissions/2018690704/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};
