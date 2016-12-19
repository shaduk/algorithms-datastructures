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
    
    public int heightTree(TreeNode root)
    {
        if(root == null)
            return 0;
        else
        {
            int heightLeft = heightTree(root.left);
            int heightRight = heightTree(root.right);
            if(heightLeft > heightRight)
                return 1 + heightLeft;
            else
                return 1 + heightRight;
        }
    }
    
    public boolean isBalanced(TreeNode root) {
        if(root == null)
            return true;
        else
        {
            if(Math.abs(heightTree(root.left) - heightTree(root.right)) > 1)
                return false;
            else
                return isBalanced(root.left) && isBalanced(root.right);
        }
    }
}