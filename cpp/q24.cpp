//
// Created by Danny Feng on 5/23/24.
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* current = dummyHead;
        while (current->next != nullptr && current->next->next != nullptr) {
            ListNode* temp = current->next;
            ListNode* temp1 = current->next->next->next;
            current->next = current->next->next;
            current->next->next = temp;
            current->next->next->next = temp1;
            current = current->next->next;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
