/*
 * Problem: 132 Pattern
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/132-pattern/submissions/2031315962/?roomId=FIiSYp
 * Language: cpp
 * Date: 2026-06-13
 */

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n =nums.size();
        stack<int> st;
        int small=INT_MIN;
        for(int i=n-1;i>=0; i--){
            if(nums[i]<small)
                return true;
            while(!st.empty() && st.top()<nums[i])
            {
                small = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
