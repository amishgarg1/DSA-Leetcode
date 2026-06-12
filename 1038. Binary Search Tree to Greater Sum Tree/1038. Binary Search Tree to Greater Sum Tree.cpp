/*
 * Problem: 1038. Binary Search Tree to Greater Sum Tree
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/submissions/2030296725/
 * Language: cpp
 * Date: 2026-06-12
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
    void solve(TreeNode* root, int &sum){
        if(root==nullptr)
        return;
        solve(root->right, sum);
        sum+=root->val;
        root->val=sum;
        solve(root->left, sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        solve(root, sum);
        return root;
    }
};
