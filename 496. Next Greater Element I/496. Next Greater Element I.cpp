/*
 * Problem: 496. Next Greater Element I
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/next-greater-element-i/
 * Language: cpp
 * Date: 2026-06-13
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack<int> st;
        int n = nums1.size();
        vector<int> ans(n,-1);
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums1[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i] = -1;
            }
            else
                ans[i] = st.top();
            st.push(nums1[i]);
        }
        return ans;
    }
};
