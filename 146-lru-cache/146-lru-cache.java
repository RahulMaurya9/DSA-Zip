class LRUCache {
    int capacityG;
    Map<Integer, Node> map = new HashMap<>();
    Node head = new Node(0, 0), tail = new Node(0, 0);
    

    public LRUCache(int capacity) {
        capacityG = capacity;
        head.next = tail;
        tail.prev = head;
        
        
    }
    
    public int get(int key) {
        if(map.containsKey(key)){
            Node data = map.get(key);
            remove(data);
            insert(data);
            return data.value;
        }else{
            return -1;
        }
        
    }
    
    public void put(int key, int value) {
        if(map.containsKey(key)){
            remove(map.get(key));
        }
        if(map.size() == capacityG){
            remove(tail.prev);
        }
        insert(new Node(key , value));
        
    }
    
    public void remove(Node node){
        map.remove(node.key);
        node.prev.next = node.next;
        node.next.prev = node.prev;

    }
    public void insert(Node node){
        map.put(node.key , node);
        Node tempNode = head.next;
        head.next = node;
        node.prev = head;
        node.next = tempNode;
        tempNode.prev = node;
        
    }
    
    class Node{
        int key, value;
        Node next , prev;
        public Node(int _key , int _value){
            key = _key;
            value = _value;
        }
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */