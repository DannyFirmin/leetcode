//
// Created by Danny Feng on 7/21/24.
//
class Solution {
public:
    void postorder(TreeNode* root, vector<int>& output) {
        if (root == nullptr) return;
        postorder(root->left, output);
        postorder(root->right, output);
        output.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        postorder(root, output);
        return output;
    }
};