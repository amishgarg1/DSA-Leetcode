/*
 * Problem: 42. Trapping Rain Water
 * Difficulty: Hard
 * Link: https://leetcode.com/problems/trapping-rain-water/submissions/2028117269/
 * Language: cpp
 * Date: 2026-06-10
 */

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        int water=0;
       for (int i=1; i<n; i++){
        left[i]=max (height[i-1],left[i-1]);
       }
        for(int i=n-2; i>=0;i--){
            right[i]=max(height[i+1], right[i+1]);
            }
            for(int i=1; i<n-1; i++){
           if(left[i]>height[i] && right[i]>height[i]){
            water+= min(left[i], right[i])-height[i];
           }
            }
       return water;
       }
};
