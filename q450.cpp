//
// Created by Danny Feng on 9/15/24.
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return root;
        if (root->val == key) {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }
                // left null, right not null, right child goes up
            else if (root->left == nullptr) {
                auto retNode = root->right;
                delete root;
                return retNode;
            }
            else if (root->right == nullptr) {
                auto retNode = root->left;
                delete root;
                return retNode;
            }
                // left right neither null, put the children of deleted node to the left most node of right child of the deleted node
            else {
                TreeNode* cur = root->right; // find left most node on its right
                while(cur->left != nullptr) {
                    cur = cur->left;
                }
                cur->left = root->left; // （root）is the node to delete, place its left tree to he cur left
                TreeNode* tmp = root;
                root = root->right;
                delete tmp;
                return root;
            }
        }
        if (root->val > key) root->left = deleteNode(root->left, key);
        if (root->val < key) root->right = deleteNode(root->right, key);
        return root;
    }
};