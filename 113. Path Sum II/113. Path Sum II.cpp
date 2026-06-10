/*
 * Problem: 113. Path Sum II
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/path-sum-ii/submissions/2028816153/
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
void solution(TreeNode* root, int targetSum,vector<int> &path, vector<vector< int>> &ans,int sum){
    if(root==nullptr)
    return;
    path.push_back(root->val);
    sum=sum+root->val;
    if(root->left==nullptr && root->right==nullptr){
        if(sum==targetSum){
        ans.push_back(path);
    }
}
    solution(root->left, targetSum, path, ans, sum);
    solution(root->right, targetSum, path, ans, sum);
    path.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        solution(root,targetSum, path,ans,0);
        return ans;
    }
};
