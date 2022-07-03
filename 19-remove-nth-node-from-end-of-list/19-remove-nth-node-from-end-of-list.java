/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode cur = head;
        int count = 0 ;
        while(cur != null){
            ++count;
            cur = cur.next;
        }
        cur = head;
        int nodeloop = count - n;
        ListNode prev = null;
        if(nodeloop == 0){
            head  = head.next;
            return head;
        }

        while( nodeloop > 0){
            prev = cur;
            cur = cur.next;
            nodeloop--;
        }
        prev.next = cur.next;
        return head;
        
        
    }
}