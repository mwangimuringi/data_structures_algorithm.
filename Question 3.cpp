#include <iostream>

using namespace std;

#include <iostream>

struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // 'prev' now points to the new head of the reversed list
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->value << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example linked list:
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(12);

    // Reverse the linked list
    Node* reversedHead = reverseLinkedList(head);

    // Print the reversed linked list
    printList(reversedHead);

    // Clean up memory
    while (reversedHead != nullptr) {
        Node* temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}
