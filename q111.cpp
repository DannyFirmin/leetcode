//
// Created by Danny Feng on 7/31/24.
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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != NULL) que.push(root);
        int depth = 1;
        while (!que.empty()) {
            int size = que.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = que.front();
                que.pop();
                if (!node) {
                    continue;
                }
                if (!node->left && !node->right) {
                    return depth;
                }
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            depth++;
        }
        return -1;
    }
};