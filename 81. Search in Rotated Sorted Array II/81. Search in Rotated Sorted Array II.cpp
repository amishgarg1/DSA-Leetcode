/*
 * Problem: 81. Search in Rotated Sorted Array II
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/2018719691/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                return true;

            }
        }
            return false;
        return {};
    }
};
