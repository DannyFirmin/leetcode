//
// Created by Danny Feng on 8/23/24.
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
    int postIndex;
    vector<int> postorder;
    vector<int> inorder;
    unordered_map<int, int> indexMap;
public:
    TreeNode* helper(int inLeft, int inRight) {
        // if there are no elements to construct subtrees
        if (inLeft > inRight) return nullptr;
        int rootValue = postorder[postIndex];
        TreeNode* root = new TreeNode(rootValue);
        int index = indexMap[rootValue];
        postIndex--;
        root->right = helper(index + 1, inRight);
        root->left = helper(inLeft, index - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        this->postorder = postorder;
        this->inorder = inorder;
        postIndex = postorder.size() - 1;
        int index = 0;
        for (int val : inorder) {
            indexMap[val] = index++;
        }
        return helper(0, inorder.size() - 1);
    }
};