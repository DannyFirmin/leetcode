//
// Created by Danny Feng on 1/25/24.
//
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* head = new ListNode(-1);
    ListNode* tail = head;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    tail->next = list1 == nullptr ? list2 : list1;

    return head->next;
}

ListNode* createList(const std::vector<int>& values) {
    ListNode *head = nullptr, *tail = nullptr;
    for (int val : values) {
        if (!head) {
            head = tail = new ListNode(val);
        } else {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

void deleteList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test example 1
    ListNode* list1 = createList({1, 2, 4});
    ListNode* list2 = createList({1, 3, 4});
    ListNode* mergedList = mergeTwoLists(list1, list2);
    std::cout << "Merged List: ";
    printList(mergedList);
    deleteList(mergedList);

    return 0;
}
