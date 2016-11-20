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
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<Integer>();
        if(root!=null)
        {
            Stack<TreeNode> st = new Stack<>();
            st.push(root);
            while(!st.empty())
            {
                TreeNode node = st.pop();
                ans.add(node.val);
                if(node.right!=null)
                st.push(node.right);
                if(node.left!=null)
                st.push(node.left);
            }
            return ans;
        }
        else
        {
            return ans;
        }
        
    }
}