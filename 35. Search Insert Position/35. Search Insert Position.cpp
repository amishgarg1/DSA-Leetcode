/*
 * Problem: 35. Search Insert Position
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/search-insert-position/submissions/2019676835/
 * Language: cpp
 * Date: 2026-06-02
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
            low=mid+1;
            }
        else{
            high =mid-1;
        }
        }
        return low;
    }
};
