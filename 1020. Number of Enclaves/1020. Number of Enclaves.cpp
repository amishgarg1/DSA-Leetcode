/*
 * Problem: 1020. Number of Enclaves
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/number-of-enclaves/submissions/2049107676/
 * Language: cpp
 * Date: 2026-06-28
 */

class Solution {
public:
    int m, n;

    void dfs(vector<vector<int>>& grid, int i, int j) {

        // Base condition
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
            return;

        // Mark visited land as water
        grid[i][j] = 0;

        // Explore 4 directions
        dfs(grid, i, j + 1); // right
        dfs(grid, i, j - 1); // left
        dfs(grid, i + 1, j); // down
        dfs(grid, i - 1, j); // up
    }

    int numEnclaves(vector<vector<int>>& grid) {

        m = grid.size();
        n = grid[0].size();

        // First column and last column
        for (int row = 0; row < m; row++) {

            if (grid[row][0] == 1)
                dfs(grid, row, 0);

            if (grid[row][n - 1] == 1)
                dfs(grid, row, n - 1);
        }

        // First row and last row
        for (int col = 0; col < n; col++) {

            if (grid[0][col] == 1)
                dfs(grid, 0, col);

            if (grid[m - 1][col] == 1)
                dfs(grid, m - 1, col);
        }

        // Count remaining land cells
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    count++;
            }
        }

        return count;
    }
};
