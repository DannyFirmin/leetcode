//
// Created by Danny Feng on 5/24/24.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummyHead = ListNode(0);
        dummyHead.next = head;
        ListNode* fast = &dummyHead;
        ListNode* slow = &dummyHead;
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        while (n >= 0) {
            fast = fast->next;
            n--;
        }
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummyHead.next;
    }
};