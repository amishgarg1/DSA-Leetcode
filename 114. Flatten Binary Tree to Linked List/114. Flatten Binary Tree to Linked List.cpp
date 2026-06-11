/*
 * Problem: 114. Flatten Binary Tree to Linked List
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/2029241892/
 * Language: cpp
 * Date: 2026-06-11
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
    void flatten(TreeNode* root) {
        if(root==nullptr)
        return;
        TreeNode* temp= root->right;
        root->right=root->left;
        root->left=nullptr;
        TreeNode* ptr = root;
        while(ptr->right!=nullptr){
            ptr=ptr->right;

        }
        ptr->right= temp;
        flatten(root->right);
    }
};
