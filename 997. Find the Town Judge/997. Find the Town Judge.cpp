/*
 * Problem: 997. Find the Town Judge
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/find-the-town-judge/submissions/2048126250/
 * Language: cpp
 * Date: 2026-06-27
 */

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n + 1);
        vector<int> outdegree(n + 1);

        for (vector<int>& vec : trust) {
            int u = vec[0];
            int v = vec[1];

            outdegree[u]++;
            indegree[v]++;
        }

        for (int i = 1; i <= n; i++) {
            if (indegree[i] == n - 1 && outdegree[i] == 0)
                return i;
        }

        return -1;
    }
};
