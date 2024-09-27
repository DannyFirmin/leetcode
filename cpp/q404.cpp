//
// Created by Danny Feng on 8/18/24.
//
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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right== NULL) return 0;

        int leftValue = sumOfLeftLeaves(root->left);    // left
        if (root->left && !root->left->left && !root->left->right) {
            // left sub-tree only has one left child
            leftValue = root->left->val;
        }
        int rightValue = sumOfLeftLeaves(root->right);  // right

        int sum = leftValue + rightValue;               // mid
        return sum;
    }
};