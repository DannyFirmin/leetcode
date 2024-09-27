//
// Created by Danny Feng on 1/28/24.
//
#include <iostream>
#include <climits>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int minDistance = INT_MAX;
    TreeNode* prevValue;
    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);
        return minDistance;
    }

private:
    void inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        inorderTraversal(root->left);
        if (prevValue != NULL) {
            minDistance = min(minDistance, root->val - prevValue->val);
        }
        prevValue = root;
        inorderTraversal(root->right);
    }
};

int main() {
    // Example usage
    Solution solution;

    // Construct a binary search tree
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(6);

    // Find the minimum difference
    cout << "Minimum difference: " << solution.minDiffInBST(root) << endl;

    return 0;
}