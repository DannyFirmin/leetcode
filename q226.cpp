//
// Created by Danny Feng on 1/11/24.
//
#include <iostream>
#include <queue>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

// Function to print the tree level order (for testing purposes)
void printLevelOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        std::cout << current->val << " ";

        if (current->left) {
            q.push(current->left);
        }

        if (current->right) {
            q.push(current->right);
        }
    }
}

// Main function for testing
int main() {
    // Example 1
    TreeNode* root1 = new TreeNode(4);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(7);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(3);
    root1->right->left = new TreeNode(6);
    root1->right->right = new TreeNode(9);

    std::cout << "Original Tree (Example 1): ";
    printLevelOrder(root1);
    std::cout << std::endl;

    TreeNode* invertedRoot1 = invertTree(root1);

    std::cout << "Inverted Tree (Example 1): ";
    printLevelOrder(invertedRoot1);
    std::cout << std::endl;

    // Example 2
    TreeNode* root2 = new TreeNode(2);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(3);

    std::cout << "Original Tree (Example 2): ";
    printLevelOrder(root2);
    std::cout << std::endl;

    TreeNode* invertedRoot2 = invertTree(root2);

    std::cout << "Inverted Tree (Example 2): ";
    printLevelOrder(invertedRoot2);
    std::cout << std::endl;

    // Example 3
    TreeNode* root3 = nullptr;

    std::cout << "Original Tree (Example 3): ";
    printLevelOrder(root3);
    std::cout << std::endl;

    TreeNode* invertedRoot3 = invertTree(root3);

    std::cout << "Inverted Tree (Example 3): ";
    printLevelOrder(invertedRoot3);
    std::cout << std::endl;

    return 0;
}