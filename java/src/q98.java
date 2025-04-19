/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class q98 {
    public boolean isValidBST(TreeNode root) {
        return valid(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }
    private boolean valid(TreeNode node, long leftBound, long rightBound) {
        if (node == null) {
            return true;
        }
        if(node.val <= leftBound || node.val >= rightBound) {
            return false;
        }
        return valid(node.left, leftBound, node.val) && valid(node.right, node.val, rightBound);
    }
}