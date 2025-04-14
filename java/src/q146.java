import java.util.HashMap;
import java.util.Map;

class ListNode {
    int key;
    int val;
    ListNode prev;
    ListNode next;
    public ListNode(int key, int val) {
        this.key = key;
        this.val = val;
    }
}

class q146 {
    int capcity;
    Map<Integer, ListNode> dic;
    ListNode head;
    ListNode tail;
    public LRUCache(int capacity) {
        this.capcity = capacity;
        dic = new HashMap<>();
        head = new ListNode(-1, -1);
        tail = new ListNode(-1, -1);
        head.next = tail;
        tail.prev = head;
    }

    public int get(int key) {
        if (!dic.containsKey(key)) {
            return -1;
        }
        ListNode myNode = dic.get(key);
        remove(myNode);
        add(myNode);
        return myNode.val;
    }

    public void put(int key, int value) {
        if (dic.containsKey(key)){
            ListNode oldNode = dic.get(key);
            remove(oldNode);
        }
        ListNode newNode = new ListNode(key, value);
        dic.put(key, newNode);
        add(newNode);

        if (dic.size() > capcity) {
            ListNode nodeToRemove = head.next;
            remove(nodeToRemove);
            dic.remove(nodeToRemove.key);
        }
    }

    public void add(ListNode node){
        ListNode prevEnd = tail.prev;
        prevEnd.next = node;
        node.prev = prevEnd;
        node.next = tail;
        tail.prev = node;
    }

    public void remove(ListNode node) {
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */