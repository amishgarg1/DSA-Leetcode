/*
 * Problem: 33. Search in Rotated Sorted Array
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0;
        int end = A.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(A[mid]==tar){
                return mid;
            }if(A[st]<=A[mid]){
                if(A[st]<=tar && tar<=A[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                if(A[mid]<=tar && tar<=A[end]){
                    st=mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};
