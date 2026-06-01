/*
 * Problem: 2149. Rearrange Array Elements by Sign
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/2018646656/
 * Language: cpp
 * Date: 2026-06-01
 */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int left=0;
        int right=1;
        vector<int> ans(n);
            for(int i=0; i<n; i++){
                if(nums[i]>0){
                   ans[left]=nums[i];
                   left= left+2;
                }else{
                    ans[right]=nums[i];
                    right=right+2;
                }
            }
        return ans;
    
    }
  };
