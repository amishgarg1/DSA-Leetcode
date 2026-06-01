/*
 * Problem: 162. Find Peak Element
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/find-peak-element/submissions/2018665824/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
                if(nums[mid]>nums[mid+1]){
                    high=mid;
                }else{
                    low=mid+1;
                }
        }
        return low;
    }
};
