/*
 * Problem: 1636. Sort Array by Increasing Frequency
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/sort-array-by-increasing-frequency/submissions/2057015144/
 * Language: cpp
 * Date: 2026-07-05
 */

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        auto cmp = [&](int a , int b){
            if(freq[a] != freq[b]) return freq[a] < freq[b];
            return a>b;
        };
        sort(nums.begin(), nums.end(), cmp);
        return nums;
    }
};
