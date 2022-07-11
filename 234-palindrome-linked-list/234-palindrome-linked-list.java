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
    public boolean isPalindrome(ListNode head) {
        if(head.next == null){
            return true;
        }
        int val1 = 0;
        int val2 = 0;
        ListNode cur = head;
        ListNode prev = null;
        while(cur != null){
            val1 = val1 *10 + cur.val;
            ListNode el = head;
            cur = cur.next;
            el.next = prev;
            prev = el;
            head = cur;
        }
        System.out.println("val1 " + val1);
        
        cur = prev;
        while(cur != null){
            val2 = val2 *10 + cur.val;
            cur = cur.next;
        }
        System.out.println("val2 " + val2);
        if(val1 == val2){
            return true;
        }
        return false;
    }
}