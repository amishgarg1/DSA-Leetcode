/*
 * Problem: 278. First Bad Version
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/first-bad-version/submissions/2019734981/
 * Language: cpp
 * Date: 2026-06-02
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        while(low<high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)==true){
                high=mid;
            }else
            low=mid+1;  
        }
        return high;
    }
};
