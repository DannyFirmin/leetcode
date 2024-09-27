//
// Created by Danny Feng on 1/10/24.
//
#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q)
        {
            return true;
        }
        if (!p || !q)
        {
            return false;
        }
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};

int main() {
    Solution solution;

    // Example 1
    TreeNode* p1 = new TreeNode(1);
    p1->left = new TreeNode(2);
    p1->right = new TreeNode(3);

    TreeNode* q1 = new TreeNode(1);
    q1->left = new TreeNode(2);
    q1->right = new TreeNode(3);

    std::cout << std::boolalpha << solution.isSameTree(p1, q1) << std::endl;

    // Example 2
    TreeNode* p2 = new TreeNode(1);
    p2->left = new TreeNode(2);

    TreeNode* q2 = new TreeNode(1);
    q2->right = new TreeNode(2);

    std::cout << std::boolalpha << solution.isSameTree(p2, q2) << std::endl;

    // Example 3
    TreeNode* p3 = new TreeNode(1);
    p3->left = new TreeNode(2);
    p3->right = new TreeNode(1);

    TreeNode* q3 = new TreeNode(1);
    q3->left = new TreeNode(1);
    q3->right = new TreeNode(2);

    std::cout << std::boolalpha << solution.isSameTree(p3, q3) << std::endl;

    // Free the allocated memory
    delete p1;
    delete q1;
    delete p2;
    delete q2;
    delete p3;
    delete q3;

    return 0;
}