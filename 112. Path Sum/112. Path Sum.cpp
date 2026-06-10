/*
 * Problem: 112. Path Sum
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/path-sum/submissions/2028246186/
 * Language: cpp
 * Date: 2026-06-10
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        if(root->left==nullptr && root->right==nullptr){
            return targetSum==root->val;
        }
        return hasPathSum(root->right, targetSum-root->val) ||
        hasPathSum(root->left, targetSum-root->val);
        
    }
};
