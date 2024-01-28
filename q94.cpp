//
// Created by Danny Feng on 1/28/24.
//
#include <iostream>
#include <vector>
#include <stack>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

std::vector<int> inorderTraversal(TreeNode* root) {
    std::vector<int> result;
    std::stack<TreeNode*> stack;
    TreeNode* current = root;

    while (current || !stack.empty())
    {
        while (current)
        {
            stack.push(current);
            current = current->left;
        }
        current = stack.top();
        stack.pop();
        result.push_back(current->val);
        current = current->right;
    }

    return result;
}

int main() {
    // Create the example tree: [1, null, 2, 3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // Call the function to perform inorder traversal
    std::vector<int> result = inorderTraversal(root);

    // Output the result
    std::cout << "Inorder Traversal: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Clean up memory
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}