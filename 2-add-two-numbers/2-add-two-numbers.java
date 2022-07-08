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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode d3 = new ListNode();
        ListNode d1 = l1 ;
        ListNode d2 = l2;
        ListNode head = d3; 
        int flag = 0;
        
        while(d1 != null && d2 != null){
            ListNode valAdd = new ListNode();
            int sum = 0;
            if(flag == 1){
                sum = d1.val + d2.val +  1;
            }else{
                sum = d1.val + d2.val;
            }
            if( sum > 9){
                valAdd.val = sum % 10;
                d3.next = valAdd;
                d3 = valAdd;
                flag = 1;
            }
            else{
                valAdd.val = sum;
                d3.next = valAdd;
                d3 = valAdd;
                flag = 0;
            }
            d1 = d1.next;
            d2 = d2.next;
            
        }
        
        if(d1 != null){
            System.out.println("D1 have big list");
            while(d1 != null){
                System.out.println(d1.val);
                ListNode data = new ListNode();
                int sum= 0;
                if(flag ==1 ){
                    sum = d1.val + 1;
                    
                }else{
                    sum = d1.val;
                }
                if(sum > 9 ){
                    data.val = sum % 10;
                    d3.next = data;
                    d3 = data;
                    flag = 1;
                }else{
                    data.val = sum;
                    d3.next = data;
                    d3 = data;
                    flag = 0;
                }
                d1 = d1.next;
            }
            
        }
        if(d2 != null){
            System.out.println("D2 have big list");
            while(d2 != null){
                ListNode data = new ListNode();
                int sum= 0;
                if(flag ==1 ){
                    sum = d2.val + 1;
                }else{
                    sum = d2.val;
                }
                if(sum > 9 ){
                    data.val = sum % 10;
                    d3.next = data;
                    d3 = data;
                    flag = 1;
                }else{
                    data.val = sum;
                    d3.next = data;
                    d3 = data;
                    flag = 0;
                }
                d2 = d2.next;
            }
        }
        if(flag == 1){
            ListNode lastnode = new ListNode();
            lastnode.val = 1;
            d3.next = lastnode;
            d3 = lastnode;
            
        }
        return head.next;
    }
}