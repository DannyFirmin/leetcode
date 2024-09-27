//
// Created by Danny Feng on 1/10/24.
//
#include <iostream>
#include <algorithm>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)
        {
            return 0;
        }
        return std::max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
    }
};

int main() {
    // Example 1
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);

    Solution solution;
    std::cout << "Example 1 Output: " << solution.maxDepth(root1) << std::endl;

    // Clean up the allocated memory for Example 1
    delete root1->right->left;
    delete root1->right->right;
    delete root1->right;
    delete root1->left;
    delete root1;

    // Example 2
    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(2);

    std::cout << "Example 2 Output: " << solution.maxDepth(root2) << std::endl;

    // Clean up the allocated memory for Example 2
    delete root2->right;
    delete root2;

    return 0;
}