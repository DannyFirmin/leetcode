//
// Created by Danny Feng on 5/28/24.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        // Initialize an empty hash set
        unordered_set<ListNode*> nodesSeen;

        // Start from the head of the linked list
        ListNode* node = head;
        while (node != nullptr) {
            // If the current node is in nodesSeen, we have a cycle
            if (nodesSeen.find(node) != nodesSeen.end()) {
                return node;
            } else {
                // Add this node to nodesSeen and move to the next node
                nodesSeen.insert(node);
                node = node->next;
            }
        }

        // If we reach a null node, there is no cycle
        return nullptr;
    }
};