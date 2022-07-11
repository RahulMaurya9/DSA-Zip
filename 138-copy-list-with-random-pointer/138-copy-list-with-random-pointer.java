/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        
        Node cur = head;
        HashMap<Node , Node> deepCopy = new HashMap<Node, Node>();
        while(cur != null){
            deepCopy.put(cur , new Node(cur.val));
            cur = cur.next;
        }
        cur  = head;
        while( cur != null){
            deepCopy.get(cur).next = deepCopy.get(cur.next);
            deepCopy.get(cur).random = deepCopy.get(cur.random);
            cur  = cur.next;
        }
        return deepCopy.get(head);
    }
}