/*
 * Problem: 84. Largest Rectangle in Histogram
 * Difficulty: Hard
 * Link: https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/2031398463/?roomId=RhNnDC
 * Language: cpp
 * Date: 2026-06-13
 */

class Solution {
    vector<int> leftmin(vector<int> &arr)
    {
        int n = arr.size();
        vector <int> leftMinIndex(n,-1);
        stack<int> stk;
        for(int i = 0; i<n; i++)
        {
            while(!stk.empty() && arr[stk.top()]>=arr[i])
            {
                stk.pop();
            }
            leftMinIndex[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
        return leftMinIndex;
    }
    vector<int> rightmin(vector<int> &arr)
    {
        int n = arr.size();
        vector <int> rightMinIndex(n,-1);
        stack<int> stk;
        for(int i = n-1; i>=0; i--)
        {
            while(!stk.empty() && arr[stk.top()]>=arr[i])
            {
                stk.pop();
            }
            rightMinIndex[i] = stk.empty() ? n : stk.top();
            stk.push(i);
        }
        return rightMinIndex;
    }
public:
    int largestRectangleArea(vector<int>& h) 
    {
        int n = h.size();
        vector<int> leftMinIndex = leftmin(h);
        vector<int> rightMinIndex= rightmin(h);
        int maxArea = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            int width = rightMinIndex[i] - leftMinIndex[i] - 1;
            int area = width * h[i];
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};
