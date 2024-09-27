//
// Created by Danny Feng on 9/9/24.
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
private:
    int maxCount = 0;
    int count = 0;
    TreeNode* pre = nullptr;
    vector<int> result;
    void searchBST(TreeNode* cur) {
        if (cur == nullptr) return ;

        searchBST(cur->left); // inorder traversal left, node, right
        if (pre == nullptr) {
            count = 1;
        } else if (pre->val == cur->val) {// same as previous node
            count++;
        } else { // different from previous node
            count = 1;
        }
        pre = cur; // update pre to current

        if (count == maxCount) { // add to result if equal to max
            result.push_back(cur->val);
        }

        if (count > maxCount) { // update max and discard previous result
            maxCount = count;
            result.clear();
            result.push_back(cur->val);
        }

        searchBST(cur->right);      // right - in order traversal
        return ;
    }

public:
    vector<int> findMode(TreeNode* root) {
        count = 0;
        maxCount = 0;
        pre = nullptr; // previous node
        result.clear();

        searchBST(root);
        return result;
    }
};