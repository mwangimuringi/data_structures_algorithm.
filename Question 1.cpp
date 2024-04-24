#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool Cycle_Check(ListNode *head) {
    // Checks if the list is empty or has only one node (no cycle can exist)
    if (!head || !head->next) {
        return false;
    }

    // Initialize two pointers that is ptr1  and ptr2
    ListNode *ptr1 = head;
    ListNode *ptr2 = head->next;

// Traverse the list using ptr1 and ptr2
    while (ptr1 != ptr2) {
        // If first pointer or its next is null, it means no cycle exists
        if (!ptr2 || !ptr2->next) {
            return false;
        }
        // Move ptr1  one step forward
        ptr1 = ptr1->next;
        // Move ptr2 two steps forward
        ptr2 = ptr2->next->next;
    }
//returns true to indicate that a cycle has occurred in the list
    return true;
}

int main() {
    // Create a sample linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next ->next->next = head->next->next; // Connect the tail to the second node

    // Check if the linked list has a cycle
    if (Cycle_Check(head)) {
        std::cout << "The linked list has a cycle." << std::endl;
        return true;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
       return false;
    }

    // Free memory by deleting the nodes
    delete head->next->next->next;
    //delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
