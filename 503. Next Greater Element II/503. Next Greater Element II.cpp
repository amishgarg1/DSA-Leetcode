/*
 * Problem: 503. Next Greater Element II
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/next-greater-element-ii/submissions/2031338468/
 * Language: cpp
 * Date: 2026-06-13
 */

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         stack<int> st;
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i =2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
            ans[i%n]=st.empty() ? -1: st.top();
            st.push(nums[i%n]);
        }
        return ans;
    }
};
