/*
 * Problem: 268. Missing Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/missing-number/submissions/2019703603/
 * Language: cpp
 * Date: 2026-06-02
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};
