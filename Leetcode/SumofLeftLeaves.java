/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if(root == null)
            return 0;
        int sum = 0;
        TreeNode temp = root;
        sum = sum + sumOfLeftLeaves(root.right);
        while(temp.left != null)
        {
            temp = temp.left;
            if(temp.right != null)
            sum = sum + sumOfLeftLeaves(temp.right);
        }
        if(temp.left == null && temp.right == null && temp != root)
        sum = sum + temp.val;
        return sum;
    }
}