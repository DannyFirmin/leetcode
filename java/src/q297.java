/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class q297 {
    public String dfsSerialize(TreeNode root, String str) {
        if (root == null) {
            str += "null,";
        } else {
            str += str.valueOf(root.val) + ",";
            str = dfsSerialize(root.left, str);
            str = dfsSerialize(root.right, str);
        }
        return str;
    }
    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        return dfsSerialize(root, "");
    }

    public TreeNode dfsDeserialize(List<String> list) {
        if(list.get(0).equals("null")) {
            list.remove(0);
            return null;
        }
        TreeNode root = new TreeNode(Integer.valueOf(list.get(0)));
        list.remove(0);
        root.left = dfsDeserialize(list);
        root.right = dfsDeserialize(list);
        return root;
    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        String[] dataArray = data.split(",");
        return dfsDeserialize(new LinkedList<String>(Arrays.asList(dataArray)));
    }
}

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// TreeNode ans = deser.deserialize(ser.serialize(root));