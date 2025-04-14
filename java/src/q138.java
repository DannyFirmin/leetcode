import java.util.HashMap;
import java.util.Map;

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


class q138 {
    public Node copyRandomList(Node head) {
        Map<Node, Node> oldToCopy = new HashMap<>();
        oldToCopy.put(null, null);
        Node current = head;
        while (current != null) {
            Node newNode = new Node(current.val);
            oldToCopy.put(current, newNode);
            current = current.next;
        }
        current = head;
        while (current != null) {
            Node copy = oldToCopy.get(current);
            copy.random = oldToCopy.get(current.random);
            copy.next = oldToCopy.get(current.next);
            current = current.next;
        }
        return oldToCopy.get(head);
    }
}