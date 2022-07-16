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
    public ListNode mergeKLists(ListNode[] lists) {
        int ln = lists.length;
        ListNode head = new ListNode(0);
        if( ln == 0){
            return null;
        }
        if(ln == 1){
            return lists[0];
        }
        head = lists[0];
        System.out.println(ln);
        for(int i = 1  ;i < ln ; i++){
            head = mergeTwoSortedLinkedList(head , lists[i]);
        }
        ListNode cur = head;
        while(cur != null){
            System.out.println(cur.val);
            cur  = cur.next;
        }
        return head;
    }
    
    ListNode mergeTwoSortedLinkedList(ListNode l1 , ListNode l2){
        if(l1 == null) return l2;
        if(l2 == null) return l1;
        ListNode handler;
        if(l1.val < l2.val){
            handler = l1;
            handler.next = mergeTwoSortedLinkedList(l1.next , l2);
        }
        else{
            handler = l2;
            handler.next  = mergeTwoSortedLinkedList(l1 , l2.next);
        }
        return handler;
    }
}