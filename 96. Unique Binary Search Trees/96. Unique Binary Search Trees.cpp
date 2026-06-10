/*
 * Problem: 96. Unique Binary Search Trees
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/unique-binary-search-trees/
 * Language: cpp
 * Date: 2026-06-10
 */

class Solution {
public:
    int numTrees(int n) {
        long long fact=1;
        for(int i=0; i<n; i++){
            fact*=(2*n-i);
            fact=fact/(i+1);
        }
        return fact/(n+1);
    }
};
