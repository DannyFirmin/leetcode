//
// Created by Danny Feng on 1/9/24.
//
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    if (!head || !head->next)
    {
        return false;
    }
    ListNode *fast = head->next;
    ListNode *slow = head;
    while (fast != slow)
    {
        if (!fast || !fast->next)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}

// Example usage
int main() {
    // Example 1
    ListNode *head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(-4);
    head1->next->next->next->next = head1->next;  // Creating a cycle

    std::cout << "Example 1: " << (hasCycle(head1) ? "true" : "false") << std::endl;

    // Example 2
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = head2;  // Creating a cycle

    std::cout << "Example 2: " << (hasCycle(head2) ? "true" : "false") << std::endl;

    // Example 3
    ListNode *head3 = new ListNode(1);

    std::cout << "Example 3: " << (hasCycle(head3) ? "true" : "false") << std::endl;

    // Clean up memory
    delete head1;
    delete head2;
    delete head3;

    return 0;
}