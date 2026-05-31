/*
 * Problem: 54. Spiral Matrix
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/spiral-matrix/description/
 * Language: cpp
 * Date: 2026-05-31
 */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
       int m = mat.size();
       int n  =mat[0].size();
        int sRow=0;
        int eRow=m-1;
        int sCol=0;
        int eCol=n-1;

        while(sRow<=eRow && sCol<=eCol){
            //top
            for(int j=sCol; j<=eCol; j++){
                ans.push_back(mat[sRow][j]);
            }
            //right
            for(int i=sRow+1; i<=eRow; i++){
                ans.push_back(mat[i][eCol]);
            }
            //bottom
            for(int j=eCol-1; j>=sCol; j--){
                if(sRow==eRow){
                    break;
                }
                 ans.push_back(mat[eRow][j]);
            }
            //left
            for(int i=eRow-1; i>=sRow+1; i--){ 
                if(sCol==eCol){
                    break;
                }
                ans.push_back(mat[i][sCol]);
            }
            sRow++; eRow--; sCol++; eCol--;
        }
        return ans;
    }
};
