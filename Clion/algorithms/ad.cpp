#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//Развернуть список
ListNode* reverseList(ListNode* head) {
    auto current = head;
    ListNode* new_current = nullptr, * new_next;
    while (current) {
        new_next = new_current;
        new_current = new ListNode(current->val);
        new_current->next = new_next;
        current = current->next;
    }

    return new_current;
}

int main() {
    ListNode* current = nullptr;
    ListNode* next;
    for (int i = 0; i < 10; ++i) {
        next = current;
        current = new ListNode(i);
        current->next = next;
    }

    ListNode* original = current;
    auto new_head = reverseList(current);

    current = original;
    for (int i = 0; i < 10; ++i) {
        std::cout << current->val << ' ';
        current = current->next;
    }
    std::cout << std::endl;

    current = new_head;
    for (int i = 0; i < 10; ++i) {
        std::cout << current->val << ' ';
        current = current->next;
    }
    std::cout << std::endl;
}