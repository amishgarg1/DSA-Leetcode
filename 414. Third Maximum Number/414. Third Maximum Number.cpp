/*
 * Problem: 414. Third Maximum Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/third-maximum-number/submissions/2020793370/
 * Language: cpp
 * Date: 2026-06-03
 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int count=1;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                count++;
            }if(count==3){
                return nums[i];
            }
        }
        return nums[0];
        
    }
};
