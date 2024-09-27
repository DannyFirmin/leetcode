//
// Created by Danny Feng on 5/21/24.
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* current = head;
        ListNode* prev = nullptr;
        while (current->next != nullptr) {
            ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        current->next = prev;
        return current;
    }
};