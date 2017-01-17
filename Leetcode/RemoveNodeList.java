/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode slowptr = head;
        ListNode fastptr = head;
        while(n-->0)
        {
            fastptr = fastptr.next;
            
        }
        if(fastptr == null) return head.next;
        fastptr = fastptr.next;
        
        while(fastptr != null)
        {
            slowptr = slowptr.next;
            fastptr = fastptr.next;
        }
        
        slowptr.next = slowptr.next.next;
        return head;
    }
}