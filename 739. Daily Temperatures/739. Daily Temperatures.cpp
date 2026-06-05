/*
 * Problem: 739. Daily Temperatures
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/daily-temperatures/submissions/2022945171/
 * Language: cpp
 * Date: 2026-06-05
 */

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =temperatures.size();
        vector<int> ans(n,0);
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int idx=st.top();
                st.pop();
                ans[idx]=i-idx;
            }
            st.push(i);
        }              
        return ans;      
    }
};
