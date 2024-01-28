//
// Created by Danny Feng on 1/25/24.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> rightSideViewBFS(TreeNode* root) {
        vector<int> view;
        if (root == nullptr) return view;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                if (i == size - 1) view.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return view;
    }
};

// Helper function to create a new TreeNode.
TreeNode* newNode(int val) {
    TreeNode* node = new TreeNode(val);
    return node;
}

int main() {
    Solution solution;
    // Create the tree from Example 1: [1,2,3,null,5,null,4]
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(4);

    // Test the function
    vector<int> result = solution.rightSideView(root);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
