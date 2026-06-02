/*
 * Problem: 278. First Bad Version
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/first-bad-version/submissions/2019742073/
 * Language: cpp
 * Date: 2026-06-02
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)==true){
                high=mid-1;
            }else
            low=mid+1;  
        }
        return low;
    }
};
