/*
 * Problem: 628. Maximum Product of Three Numbers
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/maximum-product-of-three-numbers/submissions/2018677528/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int product1=nums[n-1]*nums[n-2]*nums[n-3];
        int product2=nums[0]*nums[1]*nums[n-1];
        return max(product1, product2);
    }
};
