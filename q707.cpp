//
// Created by Danny Feng on 5/19/24.
//
class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };
    MyLinkedList() {
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index < 0 || index > _size - 1) {
            return -1;
        }
        LinkedNode* current = _dummyHead->next;
        while (index--) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(_size, val);
    }

    void addAtIndex(int index, int val) {
        if (index > _size) return;
        if (index < 0) index = 0;
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* current = _dummyHead;
        while (index--) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return;
        }
        LinkedNode* current = _dummyHead;
        while (index--) {
            current = current->next;
        }
        LinkedNode* tmp = current->next;
        current->next = current->next->next;
        delete tmp;
        tmp = nullptr;
        _size--;
    }
private:
    int _size;
    LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */