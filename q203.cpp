//
// Created by Danny Feng on 5/18/24.
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* current = head;
        while (current->next != nullptr) {
            if (current->next->val == val) {
                current->next = current->next->next;
            } else if (current->next->val != val) {
                current = current->next;
            }
        }
        return head;
    }
};